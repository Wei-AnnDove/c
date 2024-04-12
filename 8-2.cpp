#include <iostream>
#include "8.h"

using namespace std;

Clock8_2::Clock8_2(int hour, int minute, int second) {
	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	else {
		cout << "Time error!" << endl;
	}
}
void Clock8_2::showTime8_2() const {
	cout << hour << ":" << minute << ":" << second << endl;
}
Clock8_2& Clock8_2::operator++() {
	second++;
	if (second >= 60) {
		second -= 60;
		minute++;
		if (minute >= 60) {
			minute -= 60;
			hour = (hour + 1) % 24;
		}
	}
	return *this;
}
Clock8_2 Clock8_2::operator++(int) {
	Clock8_2 old = *this;
	++(*this);
	return old;
}

void test8_2() {
	Clock8_2 myClock(23, 59, 59);
	myClock.showTime8_2();
	(myClock++).showTime8_2();
	myClock.showTime8_2();
	(++myClock).showTime8_2();
	myClock.showTime8_2();
}

/*
Q:	类里面的Clock8_2& operator++()函数，如果不加&会有什么区别呢?

A:	不加`&`，这个函数返回的就是`Clock8_2`类型的对象，而不是引用类型。这样在调用`++`操作符的时候，会创建一个新的`Clock8_2`对象，并将旧的对象复制到新的对象中，然后返回新的对象。这种方式效率较低，因为需要进行复制操作。

	而加上`&`，这个函数返回的就是`Clock8_2`类型的引用类型。这样在调用`++`操作符的时候，就不会创建新的对象，而是直接返回旧的对象的引用。这种方式效率较高，因为不需要进行复制操作。

	因此，加`&`的方式更推荐使用。

Q:	如果这样为什么Clock8_2 operator++(int）函数没有&?

A:	在 C++ 中，当你使用`++`操作符时，有两种方式可以实现：前缀递增和后缀递增。前缀递增是先自增，然后返回自增后的结果。后缀递增是先返回当前的值，然后再自增。

	对于前缀递增，你需要返回引用，因为你需要在返回值上进行自增操作。如果你返回值，那么你就无法在返回值上进行自增操作，因为返回值是一个临时对象，你无法修改它的值。

	对于后缀递增，你不需要返回引用，因为你已经返回了当前的值，然后再进行自增操作。因此，你只需要返回一个新的`Clock8_2`对象，而不是引用。

	因此，`Clock8_2 operator++(int)`函数没有`&`，是因为它是后缀递增，不需要返回引用。
*/