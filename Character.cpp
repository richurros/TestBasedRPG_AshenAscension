#include "Character.h"

void Character::setAtk(int a) {
	atk = a;
}

void Character::setDefense(int d) {
	defense = d;
}

void Character::setSpd(int s) {
	spd = s;
}


void Character::setMaxHealth(int h) {
	maxHealth = h;
}

void Character::setName(string n) {
	name = n;
}

Character::Character() {
	setAtk(0);
	setDefense(0);
	setSpd(0);
	setMaxHealth(0);
	setName("name");
}
Character::Character(string name, int maxHealth, int atk, int defense, int spd) {
	setAtk(atk);
	setDefense(defense);
	setSpd(spd);
	setMaxHealth(maxHealth);
	setName(name);
}
