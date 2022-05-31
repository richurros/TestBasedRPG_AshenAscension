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

Weapon::Weapon() : Item() {
    setName("");
    setDesc("");
    setItemCount(0);
    setAttack(0);
}
Weapon::Weapon(string n, string d, int i,int atk) : Item(n, d, i) {
    setAttack (atk);
}

