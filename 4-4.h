#pragma once
#include "4-2.h"
#include <cmath>
#include <iostream>
using namespace std;

class Line {
public:
	Line(Point xp1, Point xp2);
	Line(Line& l);;
	double getLen() {
		return len;
	}
private:
	Point p1, p2;//Point类的对象p1,p2
	double len;
};

//组合类构造函数
//类::类(形参):内嵌对象1(形参),内嵌对象2(形参),...
Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}

//组合类复制构造函数
Line::Line(Line& l) :p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}












