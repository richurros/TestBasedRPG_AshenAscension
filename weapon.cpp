#include "weapon.h"
#include <iostream>

using namespace std;

void Weapon::setAttack(int atk){
    attack = atk;
}

int Weapon::getAttack(){
    return attack;
}

Weapon::Weapon(string n = "", string d = "", int i = 1, int atk = 0) {
    setName (n);
    setDesc (d);
    setItemCount(1);
    setAttack (atk);
}
