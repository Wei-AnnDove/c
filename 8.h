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

class Function8_7 {
public:
	virtual double operator () (double x) const = 0;
	//virtual ~Function8_7();
};
class MyFunction8_7 :public Function8_7 {
public:
	virtual double operator() (double  x) const;
};
class Integration8_7 {
public:
	virtual double operator() (double a, double b, double eps) const = 0;
	virtual ~Integration8_7(){}
};
class Trapz8_7 :public Integration8_7 {
private:
	const Function8_7& f;
public:
	Trapz8_7(const Function8_7 &f):f(f){}
	virtual double operator() (double a, double b, double eps) const;
};
void test8_7();

class Base8_9 {
public:
	virtual void fun1();
	virtual ~Base8_9(){}
};
class Derived1_8_9 :public Base8_9 {
public:
	virtual void fun1();
	virtual void fun2();
};
class Derived2_8_9 :public Derived1_8_9 {
	virtual void fun1();
	virtual void fun2();
};
void test8_9();