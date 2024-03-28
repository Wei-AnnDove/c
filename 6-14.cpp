#include <iostream>
#include "6.h"
using namespace std;

//int Point14::count6_14 = 0;
void test6_14() {
	int* ptr = &Point14::count6_14;
	Point14 a(4, 5);
	cout << "Point A: " << a.getX() << ", " << a.getY();
	cout << " Object count= " << *ptr << endl;

	Point14 b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	cout << " Object count= " << *ptr << endl;
}

void Point14::showCount() {
	cout << " Object count= " << count6_14 << endl;
}

void test6_15() {
	void (*funcPtr)() = Point14::showCount;
	Point14 a(4, 5);
	cout << "Point A: " << a.getX() << ", " << a.getY();
	funcPtr();

	Point14 b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	funcPtr();
}