#pragma once
class Base7_4_1 {
public:
	Base7_4_1(int i);
};
class Base7_4_2 {
public:
	Base7_4_2(int j);
};
class Base7_4_3 {
public:
	Base7_4_3();
};
class Derived7_4 :public Base7_4_2, public Base7_4_1, public Base7_4_3 {
public:
	//Derived7_4(int a, int b, int c, int d) :Base7_4_1(a), member2(d), member1(c), Base7_4_2(b);
	Derived7_4(int a, int b, int c, int d);
	//Derived7_4(int a, int b, int c, int d) :Base7_4_1(a), member2(d), member1(c), Base7_4_2(b){}
private:
	Base7_4_1 member1;
	Base7_4_2 member2;
	Base7_4_3 member3;
};

void test7_4();