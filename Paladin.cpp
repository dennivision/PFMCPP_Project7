#include "Paladin.h"

#include "Utility.h"

Paladin::Paladin(const char* str, int hp, int arm): Character(hp,arm,1), name(str) {}

const std::string& Paladin::getName()
{
	return name;
}

std::string Paladin::getStats()
{
	return getCharacterStats(this);
}
