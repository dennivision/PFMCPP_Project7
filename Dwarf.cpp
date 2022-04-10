#include "Dwarf.h"

#include "Utility.h"

Dwarf::Dwarf(const char* str, int hp, int arm) : Character(hp, arm, 1), name(str) {}

const std::string& Dwarf::getName()
{
	return name;
}

std::string Dwarf::getStats()
{
	return getCharacterStats(this);
}
