#include "sc_scn_file_structs_tree.h"

#include "../stream/scs_stream.h"

ScSCnFileStructsTree * ScSCnFileStructsTree::m_instance;

ScSCnFileStructsTree * ScSCnFileStructsTree::GetInstance()
{
  if (m_instance == nullptr)
    m_instance = new ScSCnFileStructsTree();

  return m_instance;
}

void ScSCnFileStructsTree::Add(std::string const & filePath)
{
  auto const & item = m_file_structs.find(filePath);
  if (item != m_file_structs.cend())
    return;

  m_file_structs.insert(filePath);
}

void ScSCnFileStructsTree::Dump(ScDirectory const & targetDirectory) const
{
  for (auto const & fileName : m_file_structs)
  {
    ScFile source = targetDirectory.GetFileByName(fileName + ".tex");

    std::stringstream fileText;
    source.Read(fileText);

    source.Write(
      SCsStream().Row([&fileName, &fileText]() -> SCsStream {
        return { ".", fileName, " = [*\n", fileText.str(), "\n*];;"};
      })
    );
  }
}
