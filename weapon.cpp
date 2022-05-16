#include "Weapon.h"

#include <iostream>

using namespace std;

Weapon::print() {
    cout << getDesc() << endl;
}

string Weapon::getName(){
    return name;
}

int Weapon::getItemCount(){
    return itemCount;
}

string Weapon::getDesc(){
    return desc;
}

void Weapon::setName(string nm){
    name = nm;
}

void Weapon::setItemCount(int conut){
    itemCount = conut;
}

void Weapon::setDesc(string dsc){
    desc = dsc;
}

void Weapon::eqWeapon(Weapon w) {
    isEquipped = true;
    atk += attack;
}

Weapon::Weapon() {
    attack = 0;
    isEquipped = false;
}

Weapon::~Weapon() {
}

