#pragma once

class Complex8_1 {
private:
	double real;
	double img;
public:
	Complex8_1(double r=0.0,double i=0.0):real(r),img(i){}
	Complex8_1 operator+(const Complex8_1& c2) const;
	Complex8_1 operator-(const Complex8_1& c2) const;
	void display8_1() const;
};
void test8_1();

class Clock8_2 {
private:
	int hour, minute, second;
public:
	Clock8_2(int hour = 0, int minute = 0, int second = 0);
	void showTime8_2() const;
	Clock8_2& operator++();//«∞÷√
	Clock8_2 operator++(int);//∫Û÷√
};
void test8_2();

class Base1_8_4 {
public:
	virtual void display() const;
	//void display() const;
};
class Base2_8_4 :public Base1_8_4 {
public:
	void display() const;
};
class Derived8_4 :public Base2_8_4 {
public:
	void display() const;
};
void test8_4();