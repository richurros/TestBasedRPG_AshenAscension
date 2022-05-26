#include "Player.h"
#include "item.h"
using namespace std;

Player::Player(string playerClass, string name, int maxHealth, int atk, int defense, int spd, Weapon starterw, Armor startera, Room starter) : Character(name,maxHealth,atk,defense,spd)
{
  Type = playerClass;
  locationName = "";
  combatPt = spd;
  weaponEq = starterw;
  armorEq = startera;
  location = room;
}

void Player::setType(string c) {
	type = c;
}

void Player::printInv() {
	for (int i = 0; i < this->vInventory.size(); i++) {
		this->vInventory.at(i).print();
	}
}
void Player::addToInv(Item n) {
	if (this->vInventory.size() > 0) {
		for (int i = 0; i < this->vInventory.size(); i++) {
      if (n.getName() == this->vInventory.at(i).getName()) {
				this->vInventory.at(i).setItemCount(this->vInventory.at(i).getItemCount() + n.getItemCount());
				return;
			}
    }
	}
	this->vInventory.push_back(n);
}

void Player::rmFromInv(Item n) {
   if (this->vInventory.size() > 0) {
    for (int i = 0; i < this->vInventory.size(); i++) {
      if (n.getName() == this->vInventory.at(i).getName()) {
      this->vInventory.at(i).setItemCount(this->vInventory.at(i).getItemCount() - n.getItemCount());
			if (this->vInventory.at(i).getItemCount() == 0) {
				this->vInventory.erase(this->vInventory.begin() + i);
			}
      return;
     }
   }
  }
}

Item Player::getItem(unsigned n) {
	if (n >= this->vInventory.size()) {
		cout << "Invalid location, sending empty item" << endl;
		return Item();
	}
	return this->vInventory.at(n);
}

void Player::eqWeapon(Weapon w)
{
  
}

void Player::eqArmor(Armor a)
{
  
}

void Player::move()
{
  
}

int Player::attack(Enemy &x)
{
	if (x.getBoolDef() == true)
	{
		int damageDone == ((x.getDefesne()/100)*this->getAtk()) - x.getDefense();
		if (damageDone > 0)
		{
			x.setDmgTaken(damageDone+x.getDmgTaken());
			x.setBoolDef(false);
			return damageDone;
		}
		else
		{
			x.setBoolDef(false);
			return 0;
		}
	}
	else
	{
		int damageDone1 = ((x.getDefense()/100)*this->getAtk());
		x.setDmgTaken(damageDone1+x.getDmgTaken);
		return damageDone1;
	}
}
