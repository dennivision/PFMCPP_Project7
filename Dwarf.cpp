#include "Dwarf.h"

#include "Utility.h"

Dwarf::Dwarf(std::string str, int hp, int arm) : Character(hp, arm, 4), name(str)
{
    defensiveItems = makeDefensiveItems(5);
    helpfulItems = makeHelpfulItems(2);
}

const std::string& Dwarf::getName()
{
	return name;
}

std::string Dwarf::getStats()
{
	return getCharacterStats(this);
}
