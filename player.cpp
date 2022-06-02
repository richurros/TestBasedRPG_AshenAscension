#include "player.h"
#include "item.h"
using namespace std;

Player::Player() {
	type = "";
}

void Player::setCombatPt(int c) {
    combatPt = c;
}

void Player::setType(string c) {
	type = c;
}


void Player::eqWeapon(Weapon w) {
    atk = atk - weaponEq.getAttack() + w.getAttack();
    weaponEq = w;

}

void Player::eqArmor(Armor a) {
    def = def - armorEq.getDefense() + a.getDefense();
    armorEq = a;
}

void Player::move(Room r)
{
	location = r;
}

int Player::attack(Character& x) {
    if (x.getBoolDef() == true) {
        int damageDone = ((int)(((50 - x.getDefense()) / 50.0) * (2*this->getAtk()))) - x.getDefense();
        if (damageDone > 0) {
            x.setDmgTaken(damageDone + x.getDmgTaken());
            x.setBoolDef(false);
            return damageDone;
        } else {
            x.setBoolDef(false);
            return 0;
        }
    } else {
        int damageDone1 = ((int)(((50 - x.getDefense()) / 50.0) * (2*this->getAtk())));
        x.setDmgTaken(damageDone1 + x.getDmgTaken());
        return damageDone1;
    }
} 

void Player::usePotion(string potion) {
        for (int i = 0; i < bInventory->vBag.size(); i++)
        {
                if (bInventory->vBag.at(i)->getName() == "Combat Potion Pouch")
                {
                        for (int j = 0; j < bInventory->vBag.at(i)->vBag.size(); i++)
                        {
                                if (potion.find("Healing") && bInventory->vBag.at(i)->vBag.at(j)->getName() == potion)
                                {
                                        setDmgTaken(getDmgTaken()-bInventory->vBag.at(i)->vBag.at(j)->getHealth());
                                }
                                else if (bInventory->vBag.at(i)->vBag.at(j)->getName() == potion)
                                {
                                        setAtk(getAtk()*bInventory->vBag.at(i)->vBag.at(j)->getAttack());
                                        setDefense(getDefense()*bInventory->vBag.at(i)->vBag.at(j)->getDefense());
                                }
                        }
                }
      }
}
