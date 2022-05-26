#pragma once

#include <string>
#include "item.h"

using namespace std;

class Weapon : public Item {
public:
    Weapon();
    int getAttack();
    void setAttack(int atk);
    Weapon(string n = "", string d = "", int i = 1, int atk = 0 );

private:
    int attack;
};


