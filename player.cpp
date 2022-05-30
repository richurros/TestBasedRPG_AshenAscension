#include "player.h"
#include "item.h"
using namespace std;

Player::Player() {
	type = "";
	weaponEq = nullptr;
	armorEq = nullptr;
}

Player::Player(string playerClass, string name, int maxHealth, int atk, int defense, int spd, Weapon* starterw, Armor* startera, Room starter) : Character(name, maxHealth, atk, defense, spd) {
    type = playerClass;
    string locationName = "";
    combatPt = spd;
    weaponEq = starterw;
    armorEq = startera;
    location = starter;
}

void Player::setType(string c) {
	type = c;
}

//void Player::printInv() {
//	for (int i = 0; i < this->vInventory.size(); i++) {
//		this->vInventory.at(i)->print();
//	}
//}
//void Player::addToInv(Item n) {
//	if (this->vInventory.size() > 0) {
//		for (int i = 0; i < this->vInventory.size(); i++) {
//			if (n.getName() == this->vInventory.at(i).getName()) {
//				this->vInventory.at(i).setItemCount(this->vInventory.at(i).getItemCount() + n.getItemCount());
//				return;
//			}
//		}
//	}
//	this->vInventory.push_back(&n);
//}

//void Player::rmFromInv(Item n) {
//	if (this->vInventory.size() > 0) {
//		for (int i = 0; i < this->vInventory.size(); i++) {
//			if (n.getName() == this->vInventory.at(i).getName()) {
//				this->vInventory.at(i).setItemCount(this->vInventory.at(i).getItemCount() - n.getItemCount());
//				if (this->vInventory.at(i).getItemCount() == 0) {
//					this->vInventory.erase(this->vInventory.begin() + i);
//				}
//				return;
//			}
//		}
//	}
//}

//Item Player::getItem(unsigned n) {
//	if (n >= this->vInventory.size()) {
//		cout << "Invalid location, sending empty item" << endl;
//		return Item();
//	}
//	return this->vInventory.at(n);
//}

void Player::eqWeapon(Weapon* w) {
    atk = atk - weaponEq->getAttack() + w->getAttack();
    weaponEq = w;

}

void Player::eqArmor(Armor* a) {
    def = def - armorEq->getDefense() + a->getDefense();
    armorEq = a;
}

void Player::move(Room r)
{
	location = r;
}

int Player::attack(Enemy x) {
    if (x.getBoolDef() == true) {
        int damageDone = ((x.getDefesne() / 100) * this->getAtk()) - x.getDefense();
        if (damageDone > 0) {
            x.setDmgTaken(damageDone + x.getDmgTaken());
            x.setBoolDef(false);
            return damageDone;
        } else {
            x.setBoolDef(false);
            return 0;
        }
    } else {
        int damageDone1 = ((x.getDefense() / 100) * this->getAtk());
        x.setDmgTaken(damageDone1 + x.getDmgTaken);
        return damageDone1;
    }
}

void Player::usePotion(string potion) {
        for (int i = 0; i < bInventory.vBag.size(); i++)
        {
                if (bInventory.vBag.at(i)->getName() == "Combat Pouch")
                {
                        for (int j = 0; j < bInventory.vBag.at(i).vBag.size(); i++)
                        {
                                if (potion.contains("Health") && bInventory.vBag.at(i).vBag.at(j)->getName() == potion)
                                {
                                        setDmgTaken(getDmgTaken()-bInventory.vBag.at(i).vBag.at(j)->getHealth());
                                }
                                else if (bInventory.vBag.at(i).vBag.at(j)->getName() == potion)
                                {
                                        setAtk(getAtkbInventory.vBag.at(i).vBag.at(j)->getAtk());
                                        setDefense(getDefensebInventory.vBag.at(i).vBag.at(j)->getDefense());
                                }
                        }
                }
      }
}
