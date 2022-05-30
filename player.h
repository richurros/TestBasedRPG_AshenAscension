#pragma once

#include <vector>

#include "character.h"
#include "item.h"
#include "bag.h"
#include "armor.h"
#include "weapon.h"
#include "room.h"
//#include "Enemy.h"

using namespace std;

class Player : public Character {
private:
    Weapon weaponEq;
    Armor armorEq;
    string type;
    Room location;
    int combatPt;

public:
    Bag* bInventory;
    Player();
    ~Player() {
	if (weaponEq != nullptr) {
		delete weaponEq;
	}
	if (armorEq != nullptr) {
		delete armorEq;
	}
	
	//delete *bInventory;
	delete bInventory;
	cout << "Deleted player" << endl;
    }
    Player(string type, string name, int maxHealth, int atk, int defense, int spd, Weapon* starterw, Armor* startera, Room starter);
    void setType(string playerClass);
    string getType() { return type; }
    int getcombatPt() { return combatPt; }
    void eqWeapon(Weapon* w);
    void eqArmor(Armor* a);
    void move(Room r);
    Room getLocation() { return location; }
    int attack(Enemy x);
    void usePotion(string potion);
};
