#pragma once

#include <string>
#include "item.h"

using namespace std;

class Weapon : public Item {
public:
    Weapon();
    int getAttack();
    void setAttack(int atk);
    Weapon(string n , string d, int i, int atk);
    //~Weapon() { delete this; }
private:
    int attack;
};

