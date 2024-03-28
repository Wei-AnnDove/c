#include <iostream>
#include "6.h"

using namespace std;

int Point14::count6_14 = 0;

void test6_13() {
	Point14 a(4, 5);
	Point14* p1 = &a;//对象指针
	int (Point14:: * funcPtr)() const = &Point14::getX;//函数成员指针
	//不同方式访问成员函数：
	cout << (a.*funcPtr)() << endl;
	cout << (p1->*funcPtr)() << endl;
	cout << a.getX() << endl;
	cout << p1->getX() << endl;
}