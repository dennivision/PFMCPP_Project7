#include "DefensiveItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include <cassert>

#include "Utility.h"

void DefensiveItem::use(Character* character)
{
    assert(true);
    useDefensiveItem(character, *this);
    //make your defensive item use the appropriate Utility helper functions
}
