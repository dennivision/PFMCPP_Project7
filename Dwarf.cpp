#include "Dwarf.h"

#include "Utility.h"

Dwarf::Dwarf(std::string str, int hp, int arm) : Character(hp, arm, 1), name(str)
{
    defensiveItems = makeDefensiveItems(2);
    helpfulItems = makeHelpfulItems(3);
}

const std::string& Dwarf::getName()
{
	return name;
}

std::string Dwarf::getStats()
{
	return getCharacterStats(this);
}
