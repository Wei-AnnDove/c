#include <iostream>
#include <string>
#include "4-1.h"
#include "4-2.h"
#include "4-4.h"
#include "4-7.h"
#include "4-9.h"
#include "5-8.h"
#include "6.h"
#include "7.h"
#include "7-9MATRIX.h"
#include "8.h"

using namespace std;

void test4_1() {
	Clock myClock;
	cout << "First time set and output:" << endl;
	myClock.setTime();
	myClock.showTime();
	cout << "Second time:" << endl;
	myClock.setTime(4, 24, 45);
	myClock.showTime();
	cout << endl;
}

void test4_2() {
	Point a(4, 5);
	Point b = a;//第一次复制构造
	cout << b.getX() << endl;
	fun1(b);//b作为实参第二次复制构造
	b = fun2();//返回值是类对象 函数返回时复制构造，但本编译器优化掉了
	cout << b.getX() << endl;
	cout << endl;
}

void test4_4() {
	Point myp1(1, 1), myp2(4, 5);
	Line line(myp1, myp2);
	Line line2(line);
	cout << "Length of line:";
	cout << line.getLen() << endl;
	cout << "Length of line2:";
	cout << line2.getLen() << endl;
}

void test4_7() {
	ExamInfo course1("English", "B", 26);
	ExamInfo course2("Calculus", true, 49);
	ExamInfo course3("C++", 85, 999);
	course1.show();
	course2.show();
	course3.show();
}

void test4_9() {
	SavingsAccount sa0(1, 226229, 0.015);
	SavingsAccount sa1(1, 110000, 0.025);

	sa0.deposit(5, 5000);
	sa1.deposit(15, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 4000);

	sa0.settle(90);
	sa1.settle(90);
	sa0.show();
	sa1.show();
}

void test5_8() {
	A5_8 a1(100), a2(0);
	a1.print5_8();
	a2.print5_8();
}

int main() {
	//test4_1();
	//test4_2();
	//test4_4();
	//test4_7();
	//test4_9();
	//test5_8();
	//test6_6();
	//test6_10();
	//test6_13();
	//test6_14();
	//test6_15();
	//test6_16();
	//test6_19();
	// 
	//test6_18();
	//test6_22();
	
	//test7_4();
	//testMATRIX7_9();

	//test8_1();
	//test8_2();
	//test8_4();
	//test8_7();
	test8_9();

	return 0;
}