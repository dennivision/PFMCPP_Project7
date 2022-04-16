#include "Paladin.h"

#include "Utility.h"

Paladin::Paladin(std::string str, int hp, int arm) : Character(hp, arm, 10), name(str)
{
    defensiveItems = makeDefensiveItems(6);
    helpfulItems = makeHelpfulItems(2);
}

const std::string& Paladin::getName()
{
	return name;
}

std::string Paladin::getStats()
{
	return getCharacterStats(this);
}
