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

