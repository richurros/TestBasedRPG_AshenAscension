#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <item.h>
#pragma once
using namespace std;

class Weapon : public Item {
public:
    void print();
    string getName();
    int getItemCount();
    string getDesc();
    void setName(string name);
    void setItemCount(int count);
    void setDesc(string desc);
    void eqWeapon(Weapon w);
    Weapon();
    ~Weapon();

private:
    int attack;
    bool isEquipped;
};

#endif
