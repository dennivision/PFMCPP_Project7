#include "Dragon.h"
#include "DragonSlayer.h"
#include "Utility.h"

//Dragon::Dragon

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

Dragon::Dragon(const char* str, int hp, int arm): Character(hp,arm,100), name(str) {}

const std::string& Dragon::getName()
{
    return name;
}

std::string Dragon::getStats()
{
    return getCharacterStats(this);
}
