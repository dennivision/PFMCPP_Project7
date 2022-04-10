#pragma once
#include "Character.h"

struct Dragon : Character
{
    Dragon(const char* str, int hp, int arm);    
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};


