# Cpp2SCnTex-translator

Cpp2SCnTex-translator is a tool for translating *.cpp files with documentation in SCnTeX into SCn-represented *.tex files.

## Quick start

## Installation

There is one available option to use this translator:

1. Native (Debian based distros support only)
  ```sh
  # install dependencies
  ./install_deps_ubuntu.sh [--dev]
  # build translator
  ./scripts/make_all.sh
  ```

## Usage

1. Native
  ```sh
  # translate files
  ./bin/scn-tex2scs -d -c -s <path to folder with cpp-tex sources> -t <target folder for translated tex sources>
  ```

## Feedback

Contributions, bug reports and feature requests are welcome!
Feel free to check our [issues page](https://github.com/ostis-ai/tex2scs-translator/issues) and file a new issue (or comment in existing ones).