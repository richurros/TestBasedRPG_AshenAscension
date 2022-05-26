#ifndef __ITEM_H__
#define __ITEM_H__

#include <iostream>
#include <string>
using namespace std;

class Item {
    private:
	string name;
	string desc;
	int itemCount;
    public:
	Item(string n = "", string d = "", int i = 0) { name = n; desc = d; itemCount = i;}
        ~Item() {}
	virtual void print() {
		cout << getItemCount() << "x " << getName() << endl;
		cout << "\t" <<  getDesc() << endl;
	}
	
	virtual string getName() { return this->name; }
	virtual int getItemCount() { return this->itemCount; }
	virtual string getDesc() { return this->desc; }

	virtual void setName(string s) { name = s; }
	virtual void setItemCount(int i) { itemCount = i; }
	virtual void setDesc(string d) { desc = d; }
};

#endif //__ITEM_H__
