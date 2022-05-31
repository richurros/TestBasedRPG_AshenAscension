
#include "combat.h"
/*#include <iostream> //input and output
#include <stdlib.h> //srand and rand
#include <time.h> //time
#include "Player.h"
#include "Enemy.h"
#include "Character.h"
#include "SlowPrints.h"
#include "DeathPrint.h"*/

void combat(Player x, Enemy y)
{
	slowStringPrint(x.getName() + " has engaged in combat with " + y.getName() + ".\n", "");
	
	bool plyF = true;  //boolean that determines if the player goes first or not

	if (x.getSpd() >= y.getSpd())
	{
		slowStringPrint(x.getName() + " quick to action, makes the first move!\n", "");
	}
	else
	{
		plyF = false;
		slowStringPrint(y.getName() + " is quicker, and makes the first move!\n", "");
	}
	
	//^code that decides who goes first
	
	if (plyF == false)
	{
		cout << endl;
		cout << y.getName() << " attacks " << x.getName() << "." << endl;
		cout << y.getName() << "did " << y.attack(x) << " damage to " << x.getName() << "." << endl;
		cout << endl;
	}

	while ( (x.getMaxHealth() - x.getDmgTaken() > 0) && (y.getMaxHealth() - y.getDmgTaken() > 0))
	{
		int turnPoint = x.getcombatPt();
		if (x.getBoolDef() == true)
		{
			x.setBoolDef(false);
		}

		int temp_atk = x.getAtk();
		int temp_defense = x.getDefense();

		while (turnPoint > 0)
		{
	
			cout << x.getName() << "'s Health: " << (x.getMaxHealth() - x.getDmgTaken()) << endl;
			cout << "Combat Points Left: " << turnPoint << " / " << x.getcombatPt() << endl;
			cout << "	Options:" << endl;
			cout << "	1. Attack" << endl;
			cout << " 	2. Defend" << endl;
			cout << "	3. Show Combat Pouch" << endl;
			cout << "	4. Use a Combat Item" << endl;
			
			//char input;
			string input;
			getline(cin, input);

			INPUT:
			
			//cin >> input;
			
			if (input == "1")
			{
				cout << endl;
				cout << x.getName() << " attacks " << y.getName() << "." << endl;
				cout << x.getName() << "did " << x.attack(y) << " damage to " << y.getName() << "." << endl;			
				cout << endl;
				turnPoint--;
				break;
			}
			else if (input == "2")
			{
				cout << endl;
				cout << x.getName() << " defends himself." << endl;
				cout << endl;
				x.setBoolDef(true);
				turnPoint--;
				break;
			}
			else if (input == "3")
			{
				for (int i = 0; i < x.bInventory->vBag.size(); i++)
				{
					if (x.bInventory->vBag.at(i)->getName() == "Combat Pouch")
					{
						x.bInventory->vBag.at(i)->printBag();
					}
				}
			}
			else if (input == "4")
			{
				if (turnPoint == 1)
				{
					cout << "You only have one Combat Point left to either attack or defend." << endl;
					goto INPUT;
				}
				else
				{
					string itemName;
					cout << "Please enter what item you would like to use?" << endl;
					cin >> itemName;
					turnPoint--;
					//x.usePotion(string itemName);
					x.usePotion(itemName);
				}
			}
			else
			{
				cout << "Invalid: Please type in one of the numbers given" << endl;
				goto INPUT;
			}
		}
                        
		if (y.getBoolDef() == true)
		{
			y.setBoolDef(false);
		}
			
		int randNum = 0;
		srand (time(NULL));
		randNum = rand() % 2;
			
		if (randNum == 0)
		{
			cout << endl;
                	cout << y.getName() << " attacks " << x.getName() << "." << endl;
               		cout << y.getName() << "did " << y.attack(x) << " damage to " << x.getName() << "." << endl;
                	cout << endl;
		}
		else if (randNum == 1)
		{
			 cout << endl;
                         cout << x.getName() << " defends himself." << endl;
                         cout << endl;
                         x.setBoolDef(true);
		}
		x.setAtk(temp_atk);
    		x.setDefense(temp_defense);
	}

	if (x.getDmgTaken() > x.getMaxHealth())
  	{
    		cout << x.getName() << "lost against " << y.getName() << "." << endl;
    		DeathPrint("ASCENSION ENDED\n");
    		exit(-1);
  	}
  	else
  	{
    		cout << x.getName() << "won against " << y.getName() << "." << endl;
    		cout << x.getName() << "'s Health has been reset to full.'" << endl;
    		x.setDmgTaken(0);
  	}
	
}


