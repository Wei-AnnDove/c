#include <iostream>
#include "4-1.h"
#include "4-2.h"

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

int main() {
	test4_1();
	test4_2();

	return 0;
}