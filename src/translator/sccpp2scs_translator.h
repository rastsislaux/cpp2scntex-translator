#pragma once

#include <utility>
#include <unordered_map>
#include <fstream>
#include <filesystem>
#include <iostream>

#include "filesystem/sc_file_system.h"

#include "../grammar/cpplexer.h"
#include "../grammar/cpp.h"

class Cpp2ScsTranslator
{
public:
    Cpp2ScsTranslator(bool debugMode, bool clearMode);

    bool Run(std::string const & workDirectoryPath, std::string const & targetDirectoryPath, size_t elementSysId);

private:
    bool m_debugMode;
    bool m_clearMode;

    std::unordered_set<std::string> m_extensions = {".cpp", ".hpp", ".h"};
    size_t m_filesCount;
    size_t m_fileNumber;

    void TranslateFiles(
        std::string const & nestedDirectoryPath,
        ScDirectory startDirectory,
        ScDirectory const & startTargetDirectory
    );

    bool TranslateFile(ScFile const & file, ScDirectory const & targetDirectory);

    std::string TranslateText(std::string const & filePath);

    void DumpIdentifiers(ScDirectory const & targetDirectory);

    void DumpFileStructs(ScDirectory const & targetDirecoory);
};
