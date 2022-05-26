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
		bool BoolDef;

	public:
		Character();
		Character(string name, int maxHealth, int atk, int defense, int spd);
		void setName(string name);
		string getName() const { return name; }
		void setMaxHealth(int maxHealth);
		int getMaxHealth() const { return maxHealth; }
		void setAtk(int atk);
		int getAtk() const { return atk; }
		void setDefense(int defense);
		int getDefense() const { return defense; }
		void setSpd(int spd);
		int getSpd() const { return spd; }
		void setBoolDef(bool def);
		int getBoolDef() const { return BoolDef; }
		void setDmgTaken(int d);
		int getDmgtaken() const { return dmgTaken; }
};


