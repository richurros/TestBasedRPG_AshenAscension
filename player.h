#pragma once

#include "Character.h"
#include "item.h"
#include "bag.h"
#include <vector>
//#include "armor.h"
//#include "weapon.h"
#include "room.h"

using namespace std;

class Player : public Character
{
private:
    Bag* bInventory;
    //Weapon weaponEq;
    //Armor armorEq;
    string type;
    Room location;
    int combatPt;

public:
    Player();
    //Player(string type, string name, int maxHealth, int atk, int defense, int spd, Weapon starterw, Armor startera, Room starter);
    void setType(string playerClass);
    string getType() { return type; }
    int getcombatPt() { return combatPt; }
    //void eqWeapon(Weapon w);
    //void eqArmor(Armor a);
    void move(Room r);
    Room getLocation() { return location; }
    // int attack(Enemy x);
};
