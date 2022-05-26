#include "weapon.h"
#include <iostream>
#include <string>

using namespace std;

void Weapon::setAttack(int atk){
    attack = atk;
}

int Weapon::getAttack(){
    return attack;
}


Weapon::Weapon(string n, string d, int i,int atk) {
    setName (n);
    setDesc (d);
    setItemCount(i);
    setAttack (atk);
}

