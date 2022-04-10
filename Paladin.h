#pragma once
#include <string>
#include "Character.h"

struct Paladin : Character
{
public:
    Paladin(const char* str, int hp, int armor);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    
};
