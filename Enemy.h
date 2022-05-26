#pragma once

#include "Character.h"
#include "Player.h"

using namespace std;

class Enemy : public Character
{
     
     public:
	Enemy(string name, int maxHealth, int atk, int defense, int spd);
	int attack(Player &x);
};
