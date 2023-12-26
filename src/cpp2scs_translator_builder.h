#pragma once

#include "memory"
#include "translator/sccpp2scs_translator.h"

class Cpp2TexTranslatorBuilder
{
public:
    static std::unique_ptr<Cpp2ScsTranslator> BuildDefaultTranslator(bool debugMode = false, bool clearMode = false)
    {
        return std::make_unique<Cpp2ScsTranslator>(debugMode, clearMode);
    }
};
