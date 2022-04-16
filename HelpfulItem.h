#pragma once

#include "Item.h"

struct HelpfulItem : public Item
{
    HelpfulItem() : Item("helpful item", 2) {}
    void use(Character* character) override;
};
