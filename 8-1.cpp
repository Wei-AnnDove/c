#include <iostream>
#include "8.h"

using namespace std;

Complex8_1 Complex8_1::operator+(const Complex8_1& c2) const {
	return Complex8_1(real + c2.real, img + c2.img);
}
Complex8_1 Complex8_1::operator-(const Complex8_1& c2) const {
	return Complex8_1(real - c2.real, img - c2.img);
}
void Complex8_1::display8_1() const {
	cout << "(" << real << ", " << img << ")" << endl;
}
void test8_1() {
	Complex8_1 c1(5, 4), c2(2, 10), c3;
	cout << "c1="; c1.display8_1();
	cout << "c2="; c2.display8_1();
	c3 = c1 - c2;
	cout << "c3=c1-c2="; c3.display8_1();
	c3 = c1 + c2;
	cout << "c3=c1+c2="; c3.display8_1();
}