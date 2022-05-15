#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "character.h"
#include "item.h"
#include <vector>

using namespace std;

class Player : public Character {
      private:
	vector<Item> vInventory;	
	string playerClass;
      public:
	void setPlayerClass(string c);
	Player(string playerClass = "", string name = "", int maxHealth = 0, int atk = 0, int defense = 0, int spd = 0);
	void printInv();
	void addToInv(Item n);
	void rmFromInv(Item n);
	Item getItem(unsigned);
        
};

#endif //__PLAYER_H__
