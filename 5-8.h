#pragma once
#include <iostream>
//using namespace std;

class A5_8 {
public:
	A5_8(int i);
	void print5_8();
private:
	const int a;
	static const int b;
	//static const int b=10;int和emun也可以这样

};

const int A5_8::b = 10;//静态常数据成员在类外说明、初始化

A5_8::A5_8(int i):a(i){}//常数据成员只能通过初始化列表获得初值

void A5_8::print5_8() {
	cout << a << ":" << b << endl;
}

