#include <iostream>
#include "8.h"

using namespace std;

void Base1_8_4::display() const {
	cout << "Base1::display()" << endl;
}
void Base2_8_4::display() const {
	cout << "Base2::display()" << endl;
}
void Derived8_4::display() const {
	cout << "Derived::display()" << endl;
}

void fun(Base1_8_4* ptr) {
	ptr->display();
}

void test8_4() {
	Base1_8_4 base1;
	Base2_8_4 base2;
	Derived8_4 derived;
	fun(&base1);
	fun(&base2);
	fun(&derived);
}