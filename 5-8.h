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
	//static const int b=10;int��emunҲ��������

};

const int A5_8::b = 10;//��̬�����ݳ�Ա������˵������ʼ��

A5_8::A5_8(int i):a(i){}//�����ݳ�Աֻ��ͨ����ʼ���б��ó�ֵ

void A5_8::print5_8() {
	cout << a << ":" << b << endl;
}

