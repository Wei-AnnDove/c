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
	Point b = a;//��һ�θ��ƹ���
	cout << b.getX() << endl;
	fun1(b);//b��Ϊʵ�εڶ��θ��ƹ���
	b = fun2();//����ֵ������� ��������ʱ���ƹ��죬�����������Ż�����
	cout << b.getX() << endl;
	cout << endl;
}

int main() {
	test4_1();
	test4_2();

	return 0;
}