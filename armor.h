#pragma once

#include <string>
#include <iostream>
#include "item.h"

using namespace std;

class Armor : public Item {
public:
    int getDefense(){ return defense; };
    void setDefense(int df){defense = df; };
    Armor(string n = "", string d = "", int i = 1, int df = 0 ){
        setName(n);
        setDesc(d);
        setItemCount(i);
        setDefense(df);
    };
    ~Armor() { }
private:
    int defense;

};

