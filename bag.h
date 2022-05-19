#ifndef __BAG_H__
#define __BAG_H__

#include <iostream>
#include <string>
#include <vector>

#include "item.h"
using namespace std;

class Bag : public Item {
    private:
	vector<Item> vBag;
    public:
	Item getItem(unsigned);
        void printBag();
	void addToBag(Item n);
	void rmFromBag(Item n);
};

#endif //__BAG_H__
