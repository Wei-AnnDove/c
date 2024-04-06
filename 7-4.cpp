#include <iostream>
#include "7.h"

using namespace std;

Base7_4_1::Base7_4_1(int i) {
	cout << "Constructing Base1 " << i << endl;
}
Base7_4_2::Base7_4_2(int j) {
	cout << "Constructing Base2 " << j << endl;
}
Base7_4_3::Base7_4_3() {
	cout << "Constructing Base3 *" << endl;
}
Derived7_4::Derived7_4(int a, int b, int c, int d) :Base7_4_1(a), member2(d), member1(c), Base7_4_2(b) {}

void test7_4() {
	Derived7_4(1, 2, 3, 4);
}