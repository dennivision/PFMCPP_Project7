#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    void attack(Character& other) override;
    DragonSlayer(std::string str, int hp, int arm);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem = std::make_unique<AttackItem>();
    
};
