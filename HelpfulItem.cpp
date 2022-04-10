#include "HelpfulItem.h"

#include "Utility.h"

HelpfulItem::~HelpfulItem() {}

void HelpfulItem::use(Character *character)
{
    useHelpfulItem(character, this);
}
