#include "bag.h"
#include <iostream>
#include <string>

void Bag::printBag() {
	cout << getName() << ": " << getDesc() << endl;
	for (int i = 0; i < this->vBag.size(); ++i) {
		this->vBag.at(i)->print();
		cout << endl;
	}
}

void Bag::addToBag(Item* n) {
	if (this->vBag.size() > 0) {
                for (int i = 0; i < this->vBag.size(); i++) {
                        if (n->getName() == this->vBag.at(i)->getName()) {
                                this->vBag.at(i)->setItemCount(this->vBag.at(i)->getItemCount() + n->getItemCount());
                                return;
                        }
                }
        }
        this->vBag.push_back(n);
}

void Bag::rmFromBag(Item* n) {
        if (this->vBag.size() > 0) {
                for (int i = 0; i < this->vBag.size(); i++) {
                        if (n->getName() == this->vBag.at(i)->getName()) {
                                this->vBag.at(i)->setItemCount(this->vBag.at(i)->getItemCount() - n->getItemCount());
                                if (this->vBag.at(i)->getItemCount() == 0) {
                                        this->vBag.erase(this->vBag.begin() + i);
                                }
                                return;
                        }
                }
        }

}

Item Bag::getItem(unsigned n) {
	if (n >= this->vBag.size()) {
		cout << "Invalid location, sending empty item" << endl;
		return Item();
	}
	return *(this->vBag.at(n));
}
