nclude "Armor.h"

#include <iostream>

using namespace std;

Armor::print() {
    cout << getDesc() << endl;
}

string Armor::Armor() {
    return name;
}

int Armor::getItemCount() {
    return itemCount;
}

string Armor::getDesc() {
    return desc;
}

void Armor::setName(string nm) {
    name = nm;
}

void Armor::setItemCount(int conut) {
    itemCount = conut;
}

void Armor::setDesc(string dsc) {
    desc = dsc;
}

void Armor::eqArmor(Armor a) {
    isEquipped = true;
    defense += def;
}

Armor::Armor() {
    def = 0;
    isEquipped = false;
}

Armor::~Armor() {
}

