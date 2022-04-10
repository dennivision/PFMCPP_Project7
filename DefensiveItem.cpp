#include "DefensiveItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"

#include "Utility.h"

DefensiveItem::~DefensiveItem() {}

void DefensiveItem::use(Character* character)
{
    useDefensiveItem(character, *this);
}
