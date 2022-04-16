#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string str, int hp, int arm);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    
};
