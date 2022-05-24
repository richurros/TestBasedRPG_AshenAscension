#pragma once

#include "character.h"
#include "item.h"
#include <vector>
//#include "armor.h"
////#include "weapon.h"
#include "room.h"

using namespace std;

class Player : public Character
{
private:
    vector<Item> vInventory;
        //Weapon weaponEq;
            //Armor armorEq;
                string type;
                   Room location;
                        int combatPt;

                      public:
                         Player();
                         //Player(string type, string name, int maxHealth, int atk, int defense, int spd, Weapon starterw, Armor startera, Room starter);
                                    void setType(string playerClass);
                                    string getType() { return type; }
                                            void printInv();
                                                void addToInv(Item n);
                                                    void rmFromInv(Item n);
                                                        Item getItem(unsigned);
                                                            int getcombatPt() { return combatPt; }
                                                                //void eqWeapon(Weapon w);
                                                                    //void eqArmor(Armor a);
                                                                        void move(Room r);
                                                                            Room getLocation() { return location; }
                                                                               // int attack(Enemy x);


                                                                               };

