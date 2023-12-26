#include "sccpp2scs_translator.h"

#include "../grammar/cppBaseListener.h"
#include "log/sc_log.hpp"
#include "helper/scs_helper.h"
#include "identifiers-tree/sc_scn_prefix_tree.h"
#include "file-structs/sc_scn_file_structs_tree.h"

Cpp2ScsTranslator::Cpp2ScsTranslator(bool debugMode, bool clearMode)
/* sdfsdfsdf */
{
    m_debugMode = debugMode;
    m_clearMode = clearMode;
}

bool Cpp2ScsTranslator::Run(
    std::string const & workDirectoryPath,
    std::string const & targetDirectoryPath,
    size_t elementSysId = 0
)
{
    if (!ScDirectory::IsDirectory(workDirectoryPath))
    {
        SC_LOG_ERROR("Source path is not a directory.");
        return false;
    }

    SC_LOG_INFO("Starting to translate SCCpp sources:");

    if (m_debugMode)
    {
        SC_LOG_INFO("Set debug mode");
        utils::ScLog::SetDebugMode();
    } 
    else
    {
        SC_LOG_INFO("Set release mode");
    }

    ScSCnPrefixTree::GetInstance()->SetNewElementNumber(elementSysId);
    SC_LOG_WARNING("First element system identifier: "
        << ScSCnPrefixTree::GetInstance()->GetFreeElementSystemIdentifier());

    ScDirectory const & workDirectory { workDirectoryPath };
    m_filesCount = workDirectory.CountFiles(m_extensions);

    ScDirectory const & targetDirectory { targetDirectoryPath };
    std::string const & startDirectoryPath = workDirectory.GetPath();
    m_fileNumber = 0;

    SC_LOG_INFO("CPP sources directory: " << workDirectory.GetPath());
    SC_LOG_INFO("Target SCs sources directory: " << targetDirectory.GetPath());

    if (m_clearMode)
    {
        SC_LOG_INFO("Clear target SCs sources directory.");
        ScDirectory { targetDirectory } .RemoveDirectory();
    }

    TranslateFiles(startDirectoryPath, workDirectory, targetDirectory);
    DumpIdentifiers(targetDirectory);
    DumpFileStructs(targetDirectory);

    SC_LOG_WARNING("Free element system identifier: "
        << ScSCnPrefixTree::GetInstance()->GetFreeElementSystemIdentifier());
    SC_LOG_INFO("Translation finished.");

    return true;
}

void Cpp2ScsTranslator::TranslateFiles(
    std::string const & nestedDirectoryPath,
    ScDirectory startDirectory,
    ScDirectory const & startTargetDirectory
)
{
    ScDirectory targetDirectory = startDirectory.CopyDirectory(nestedDirectoryPath, startTargetDirectory);

    ScDirectory { nestedDirectoryPath } .ForEach(
        [this, &startDirectory, &startTargetDirectory](ScDirectory const & directory) {
            TranslateFiles(directory.GetPath(), startDirectory, startTargetDirectory);
        },

        [this, &targetDirectory](ScFile const & file) {
            if (file.HasExtension(m_extensions))
            {
                SCsStream::Clear();
                bool result = TranslateFile(file, targetDirectory);
                SC_LOG_INFO("[" << ++m_fileNumber << "/" << m_filesCount << "]: " << file.GetPath()
                    << " - " << (result ? "OK" : "ERROR"));
            }
            /* TODO: Not sure if we really need this.
            else
            {
                ScFile copiedFile = targetDirectory.CopyFile(file, "", true);
                SC_LOG_INFO("Generated file: " << copiedFile.GetPath());
            }
            */
        }
    );

}

bool Cpp2ScsTranslator::TranslateFile(
    ScFile const & file,
    ScDirectory const & targetDirectory
)
{
    ScFile targetFile = targetDirectory.CopyFile(file, ".tex");

    std::string scsText;
    try {
        scsText = TranslateText(file.GetPath());
    }
    catch (std::exception const & e)
    {
        targetFile.Write(e.what());
        SC_LOG_ERROR(e.what());
        return false;
    }

    targetFile.Write(scsText);
    return true;
}

std::string Cpp2ScsTranslator::TranslateText(std::string const & filePath)
{
    std::ifstream file(filePath, std::ios_base::in);
    antlr4::ANTLRInputStream input(file);
    cpplexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    cpp parser(&tokens);

    SCsHelper::SetCurrentFile(filePath);
    file.close();

    return parser.translationUnit()->resultDocText;
}

void Cpp2ScsTranslator::DumpIdentifiers(ScDirectory const & targetDirectory)
{
  std::string const targetDirPath = targetDirectory.GetPath();
  ScFile dumpFile = (targetDirPath.at(targetDirPath.size() - 1) == '/'
    ? targetDirPath : targetDirPath + "/") + "identifiers.tex";

  std::string const scsText = ScSCnPrefixTree::GetInstance()->Dump();
  dumpFile.Write(scsText);
}

void Cpp2ScsTranslator::DumpFileStructs(ScDirectory const & targetDirectory)
{
  ScSCnFileStructsTree::GetInstance()->Dump(targetDirectory);
}
