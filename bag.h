#ifndef __BAG_H__
#define __BAG_H__

#include <iostream>
#include <string>
#include <vector>

#include "item.h"
using namespace std;

class Bag : public Item {
    public:
	vector<Item *> vBag;
    public:
	//Item getItem(unsigned);
	Bag(string n = "", string d = "", int i = 0) : Item(n, d, i) {
		vBag = {};
	}
	~Bag() {
		//for (auto itb = vBag.begin(); itb != vBag.end(); itb++) {
		for ( int i = 0; i < vBag.size(); ++i ) {
			//cout << i << ": ";
			//vBag.at(i)->print();
			if (vBag.at(i)->getName().find("Bag") != string::npos) {
			//if (vBag.at(i)->getName().find("Bag") != string::npos) {
				//for (auto it = (*itb)->getBag().begin(); it != (*itb)->getBag().end(); it++) {
				//for (auto it = vBag.at(i)->getBag().begin() ; it != vBag.at(i)->getBag().end(); ) {
				for (int j = 0; j < vBag.at(i)->getBag().size(); ++j) {
					//cout << j << ": "; 
					//vBag.at(i)->getBag().at(j)->print();
					//cout << endl;
					//delete *it;
					//it = vBag.at(i)->getBag().erase(it);
					delete vBag.at(i)->getBag().at(j);
				}
			}
			//itb = vBag.erase(itb);
			delete vBag.at(i);
		}
		//for (int i = 0; i < vBag.size(); ++i) {
		//	delete vBag.at(i);
		//}
		//vBag.clear();
		//delete vBag;
	}
        void printBag();
	void addToBag(Item* n);
	void rmFromBag(Item* n);
	vector<Item *> getBag() { return vBag; }
};

#endif //__BAG_H__
