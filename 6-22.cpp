#include <iostream>
#include <cassert>
#include "6.h"

using namespace std;

ArrayOfPoints22::ArrayOfPoints22(int size) :size(size) {
	points = new Point16[size];
	cout << "New points " << size << endl;
}
ArrayOfPoints22::ArrayOfPoints22(const ArrayOfPoints22& v) {
	size = v.size;
	points = new Point16[size];
	for (int i = 0; i < size; i++)
		points[i] = v.points[i];
}
ArrayOfPoints22::~ArrayOfPoints22() {
	cout << "Deleting points " << this->size << endl;
	delete[]points;
}

void test6_22() {
	int count;
	cout << "Enter the count of points:";
	cin >> count;
	ArrayOfPoints22 points1(count);
	points1.element(0).move(2, 35);
	points1.element(1).move(1345, 531);
	ArrayOfPoints22 points2 = points1;
	cout << "Copy of points1:" << endl;
	cout << "Points0 of array2 :" << points2.element(0).getX() << "," << points2.element(0).getY() << endl;
	cout << "Points1 of array2 :" << points2.element(1).getX() << "," << points2.element(1).getY() << endl << endl;

	points1.element(0).move(456, 33);
	points1.element(1).move(5, 661);
	cout << "After the moving of point1:" << endl;
	cout << "Points0 of array2 :" << points2.element(0).getX() << "," << points2.element(0).getY() << endl;
	cout << "Points1 of array2 :" << points2.element(1).getX() << "," << points2.element(1).getY() << endl;
}