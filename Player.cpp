#include "Player.h"

Player::Player(string playerClass, string name, int maxHealth, int atk, int defense, int spd)
{
	setType(playerClass);
	setAtk(atk);
	setDefense(defense);
	setSpd(spd);
	setMaxHealth(maxHealth);
	setName(name);
}

void Player::setType(string c) {
	type = c;
}
