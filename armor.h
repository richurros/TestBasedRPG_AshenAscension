fndef ARMOR_H
#define ARMOR_H

#include <string>
#include <item.h>
#pragma once
using namespace std;

class Armor : public Item {
public:
    void print();
    string getName();
    int getItemCount();
    string getDesc();
    void setName(string name);
    void setItemCount(int count);
    void setDesc(string desc);
    void eqArmor(Armor a);
    int getDefense();
    Armor();
    ~Armor();

private:
    int def;
    bool isEquipped;
};

#endif
