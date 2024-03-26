#include "6.h"
#include <iostream>

using namespace std;

void test6_6() {
	void* pv;
	int i = 5;
	pv = &i;
	int* pint = static_cast<int*>(pv);
	cout << "* pint= " << *pint << endl;
	cout << "  pint= " << pint << endl;
}