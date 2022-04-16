#pragma once
#include "Character.h"

struct Dwarf : Character
{
public:
    Dwarf(std::string str, int hp, int arm);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    
};
