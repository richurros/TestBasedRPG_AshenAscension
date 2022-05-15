#pragma once

#include <iostream>
#include <string> 
using namespace std;

class Character
{
	private:
		string name;
		int maxHealth;
		int atk;
		int defense;
		int spd;
		int dmgTaken;

	public:
		Character();
		Character(string name, int maxHealth, int atk, int defense, int spd);
		void setName(string name);
		string getName() { return name; }
		void setMaxHealth(int maxHealth);
		int getMaxHealth() { return maxHealth; }
		void setAtk(int atk);
		int getAtk() { return atk; }
		void setDefense(int defense);
		int getDefense() { return defense; }
		void setSpd(int spd);
		int getSpd() { return spd; }
};

