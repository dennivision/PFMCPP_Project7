#include "Dwarf.h"

#include "Utility.h"

Dwarf::Dwarf(const char* str, int hp, int armor) : Character(hp, armor, 1), name(str) {}

const std::string& Dwarf::getName()
{
	return name;
}

std::string Dwarf::getStats()
{
	return getCharacterStats(this);
}
