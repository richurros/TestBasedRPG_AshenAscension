#include "armor.h"
#include <string>
#include <iostream>

using namespace std;

void Armor::setDefense(int df) {
    defense = df;
}
int Armor::getDefense() {
    return defense;
}

Armor::Armor(string n = "", string d = "", int i = 1, int df = 0) {
    setName (n);
    setDesc (d);
    setItemCount(i);
    setDefense(df);
}

