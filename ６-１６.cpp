#include <iostream>
#include "6.h"

using namespace std;

Point16::Point16() :x(0), y(0) {
	cout << "Point16 默认构造" << endl;
}
Point16::Point16(int x, int y) :x(x), y(y) {
	cout << "Point16 构造函数" << endl;
}
Point16::~Point16() {
	cout << "Point16 析构函数" << endl;
}
int Point16::getX()const { return x; }
int Point16::getY()const { return y; }
void Point16::move(int newX, int newY) {
	x = newX;
	cout << "x=" << x << endl;
	y = newY;
	cout << "y=" << y << endl;
}

void test6_16() {
	Point16* ptr1 = new Point16;
	delete ptr1;
	ptr1 = new Point16(1, 2);
	delete ptr1;
	cout << endl;

	Point16* ptr = new Point16[2];
	ptr[0].move(5, 10);
	ptr[1].move(14, 36);
	delete[] ptr;
}