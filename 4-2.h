#pragma once
using namespace std;
class Point
{
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

private:
	int x, y;
};

Point::Point(Point& p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

void fun1(Point p) {
	cout << p.getX() << endl;
}//形参为类对象

Point fun2() {
	Point a(1, 2);
	return a;
}//返回值为类对象

//int main() {
//	Point a(4, 5);
//	Point b = a;
//	cout << b.getX() << endl;
//	fun1(b);
//	b = fun2();
//	cout << b.getX() << endl;
//	return 0;
//
//}
