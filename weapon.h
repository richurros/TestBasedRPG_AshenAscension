#pragma once

#include <string>
#include <iostream>
#include "item.h"

using namespace std;

class Weapon : public Item {
public:
    int getAttack() { return attack; };
    void setAttack(int atk){ attack = atk; };
    Weapon(string n = "", string d = "", int i = 1, int atk = 0)  {
        setName(n);
        setDesc(d);
        setItemCount(i);
        setAttack(atk);
    
    };
private:
    int attack;
};

