#pragma once
#include "Character.h"

struct Dwarf : Character
{
public:
    Dwarf(const char* str, int hp, int armor);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    
};
