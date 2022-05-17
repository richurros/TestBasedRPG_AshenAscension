#ifndef __SAMPLE_H__
#define __SAMPLE_H__

#include <iostream>
#include <string>

#include "item.h"
using namespace std;

class Sample : public Item {
    private:
	string name;
	int itemCount;
	string desc;
    public:
	Sample(string n = "", string d = "", int i = 0);
        void print();
	
};

#endif //__SAMPLE_H__
