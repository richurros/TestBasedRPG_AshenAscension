#include <iostream>
#include <string>
#include <vector>
#include "item.h"
#include "bag.h"


int main() {
	Item* i1 = new Item("Item", "Desc", 1);
	Bag* b1 = new Bag("Bag Name", "Bag Desc", 1);

	//b1.setName("Bag A");
	//b1.setDesc("For Testing Purposes");
	//b1.setItemCount(1);

	//i1.setName("Sample Name");
	//i1.setDesc("testing");
	//i1.setItemCount(5);

	//Sample i2("Potions", "Heals Character HP", 2);
	
	b1->addToBag(i1);
	
	Bag* b2 = new Bag("Bag 2", "Bag 2 Desc", 2);
	
	b1->addToBag(b2);	

	b1->print();
	cout << endl << endl;
	b1->printBag();
        cout << endl << endl;
	//b1->vBag.at(1)->printBag();
	//cout << endl << endl;
	delete b1;

	return 0;
}
