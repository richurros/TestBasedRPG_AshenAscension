#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "item.h"
#include "character.h"
#include "sample.h"
#include "bag.h"


int main() {
	Sample i1;
	Bag b1;

	b1.setName("Bag A");
	b1.setDesc("For Testing Purposes");
	b1.setItemCount(1);

	i1.setName("Sample Name");
	i1.setDesc("testing");
	i1.setItemCount(5);

	Sample i2("Potions", "Heals Character HP", 2);
	
	Player p1("e", "e", 1, 1, 1, 1);
	b1.addToBag(i1);
	b1.addToBag(i2);
	
	p1.addToInv(b1);
	
	//i1.print();
	b1.printBag();
	cout << endl << endl;
	p1.printInv();
	
	return 0;
}
