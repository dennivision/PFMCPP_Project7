#include "Paladin.h"

#include "Utility.h"

Paladin::Paladin(std::string str, int hp, int arm): Character(hp,arm,1), name(str)
{
    defensiveItems = makeDefensiveItems(3);
    helpfulItems = makeHelpfulItems(4);
}

const std::string& Paladin::getName()
{
	return name;
}

std::string Paladin::getStats()
{
	return getCharacterStats(this);
}
