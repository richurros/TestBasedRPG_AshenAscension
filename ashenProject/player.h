#pragma once

#include <vector>

#include "character.h"
#include "item.h"
#include "bag.h"
#include "armor.h"
#include "weapon.h"
#include "potion.h"
#include "room.h"

using namespace std;

class Player : public Character {
private:
    int weaponEq;
    int armorEq;
    string type;
    Room location;
    int combatPt;

public:
    Bag* bInventory;
    Player();
    ~Player() {
	
	delete bInventory;
	cout << "Deleted player" << endl;
    }
    
    void setType(string playerClass);
    string getType() { return type; }
    int getcombatPt() { return combatPt; }
    void setCombatPt(int c);
    void eqWeapon(Weapon &w);
    void eqArmor(Armor &a);
    void eqWeapon(int a);
    void eqArmor(int d);
    void move(Room &r);
    Room getLocation() { return location; }
    int attack(Character& x);
    void usePotion(string potion);
};

