#include "sample.h"
#include <iostream>
#include <string>

using namespace std;

Sample::Sample(string n, string d, int i)
{
	setName(n);
        setDesc(d);
        setItemCount(i);
}

void Sample::print() {
        cout << this->getItemCount() << "x " << this->getName() << endl;
	cout << "\t" << this->getDesc() << endl;
}
