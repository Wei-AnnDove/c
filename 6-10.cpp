#include <iostream>
#include "6.h"

using namespace std;

void test6_10_1(float x, int* intPart, float* fracPart) {
	*intPart = static_cast<int>(x);
	*fracPart = x - *intPart;
}

void test6_10_2(float x, int& n, float& f) {
	n = static_cast<int>(x);
	f = x - n;
}


void test6_10() {
	cout << "Enter a float point number: ";
	float x, f;
	int n;
	cin >> x;
	test6_10_1(x, &n, &f);
	cout << endl << "integer part: " << n << " fraction part: " << f << endl;
	cout << "Enter a float point number: ";
	cin >> x;
	test6_10_2(x, n, f);
	cout << endl << "Integer Part: " << n << " Fraction Part: " << f << endl;
}