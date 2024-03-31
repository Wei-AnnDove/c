#pragma once

void test6_6();
void test6_10();

class Point14 {
public:
	Point14(int x = 0, int y = 0) :x(x), y(y) {
		count6_14++;
	}
	Point14(const Point14& p) :x(p.x), y(p.y) {
		count6_14++;
	}
	~Point14() { count6_14--; }
	int getX() const { return x; }
	int getY() const { return y; }
	static void showCount();
	//static void showCount() {
	//	cout << " Object count= " << count << endl;
	//}
	static int count6_14;

private:
	int x, y;

};

//int Point14::count6_14 = 0;  在这里是错误的

void test6_13();
void test6_14();
void test6_15();

class Point16 {
public:
	Point16();
	Point16(int x, int y);
	~Point16();
	int getX() const;
	int getY() const;
	void move(int x, int y);
private:
	int x, y;
};

void test6_16();