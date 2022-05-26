
void combat(Player x, Enemy y)
{
	cout << x.getName() << " has engaged in combat with " << y.getName() << "." << endl;
	
	bool plyF = true;  //boolean that determines if the player goes first or not

	if (x.getSpd() >= y.getSpd())
	{
		cout << x.getName() << " quick to action, makes the first move!" << endl;
	}
	else
	{
		plyF = false;
		cout << y.getName() << " is quicker, and makes the first move!" << endl;
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
		while (turnPoint > 0)
		{
			if (x.getBoolDef() == true)
			{
				setBoolDef(false);
			}
	
			cout << x.getName() << "'s Health: " << (x.getMaxHealth() - x.getDmgTaken()) << endl;
			cout << "Combat Points Left: " << turnPoint << " / " << x.getcombatPt() << endl
			cout << "	Options:" << endl;
			cout << "	1. Attack" << endl;
			cout << " 	2. Defend" << endl;
			cout << "	3. Show Combat Pouch" << endl;
			cout << "	4. Use a Combat Item" << endl;
			
			char input;

			INPUT:
			
			cin >> input;
			
			if (input == "1")
			{
				cout << endl;
				cout << x.getName() << " attacks " << y.getName() << "." << endl;
				cout << x.getName() << "did " << x.attack(y) << " damage to " << y.getName() << "." << endl;			
				cout << endl;
				break;
			}
			else if (input == "2")
			{
				cout << endl;
				cout << x.getName() << " defends himself." << endl
				cout << endl;
				x.setBoolDef(true);
				break;
			}
			else if (input == "3")
			{
				for (int i = 0; i < vInventory.size(); i++)
				{
					if (vInventory.at(i).getName() == "Combat Pouch")
					{
						vInventory.at(i).printBag();
					}
				}
			}
			else if (input == "4")
			{
				string itemName;
				cout << "Please enter what item you would like to use?" << endl;
				cin >> itemName;
				for (int i = 0; i < vInventory.size(); i++)
				{
					if (vInventory.at(i).getName() == "Combat Pouch")
					{
						for (int j = 0; j < vInventory.at(i).size(); j++)
						{
							if (vInventory.at(i).at(j).getName() == itemName)
							{
								cout << x.getName() << " used " << itemName << "." << endl;
								turnPoint--;
								vInventory.at(i).at(j).usePotion(itemName);
								continue;
							}
						}
						cout << "You do not have that item in your Combat Pouch" << endl;
					}
				}
			}
			else
			{
				cout << "Invalid: Please type in one of the numbers given" << endl;
				goto INTPUT;
			}
                        
			if (y.getBoolDef() == true)
			{
				setBoolDef(false);
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
                                 cout << x.getName() << " defends himself." << endl
                                 cout << endl;
                                 x.setBoolDef(true);
			}


		}

		
	}

	
}


