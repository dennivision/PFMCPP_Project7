#pragma once
#include "Character.h"

struct Dwarf : Character
{
private:
    const std::string name;
    Dwarf(const char* str, int hp, int damage);
};
