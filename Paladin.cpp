#include "Paladin.h"

#include "Utility.h"

Paladin::Paladin(const char* str, int hp, int armor): Character(hp,armor,1), name(str) {}

const std::string& Paladin::getName()
{
	return name;
}

std::string Paladin::getStats()
{
	return getCharacterStats(this);
}
