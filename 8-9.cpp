#include <iostream>
#include "8.h"

using namespace std;

void Base8_9::fun1() {
	cout << "Base::fun1()" << endl;
}
void Derived1_8_9::fun1() {
	cout << "Deriver1::fun1()" << endl;
}
void Derived1_8_9::fun2() {
	cout << "Derived1::fun2()" << endl;
}
void Derived2_8_9::fun1() {
	cout << "Derived2::fun1()" << endl;
}
void Derived2_8_9::fun2() {
	cout << "Derived2::fun2()" << endl;
}
void fun(Base8_9* b) {
	b->fun1();
	Derived1_8_9* d = dynamic_cast<Derived1_8_9*>(b);//base转换到derived为空指针
	if (d != 0) d->fun2();
}

void test8_9() {
	Base8_9 b;
	fun(&b);
	Derived1_8_9 d1;
	fun(&d1);
	Derived2_8_9 d2;
	fun(&d2);
}
