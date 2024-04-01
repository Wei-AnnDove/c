#include <iostream>
#include <cassert>
#include "6.h"

using namespace std;


ArrayPoints18::ArrayPoints18(int size) :size(size) {
	points = new Point16[size];
	cout << "New points " << size << endl;
}
ArrayPoints18::~ArrayPoints18() {
	cout << "Deleting points " << this->size << endl;
	delete[]points;
}
//Point16 ArrayPoints18::element(int index) {
//	assert(index >= 0 && index < size);
//	return points[index];
//}

void test6_18() {
	int count;
	cout << "Enter the count of points:";
	cin >> count;
	ArrayPoints18 points(count);
	points.element(0).move(2, 35);
	points.element(1).move(1345, 531);
}