#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    void attack(Character& other) override;
    DragonSlayer(const char* str, int hp, int arm);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    
};
