#pragma once
#include "Character.h"

struct Dragon : Character
{
    void attack(Character& other) override;
    Dragon(const char* str, int hp, int armor);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};


