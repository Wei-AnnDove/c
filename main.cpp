#include <iostream>
#include "4-1.h"
#include "4-2.h"
#include "4-4.h"

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

int main() {
	test4_1();
	//test4_2();
	test4_4();


	return 0;
}