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
Q:	�������Clock8_2& operator++()�������������&����ʲô������?

A:	����`&`������������صľ���`Clock8_2`���͵Ķ��󣬶������������͡������ڵ���`++`��������ʱ�򣬻ᴴ��һ���µ�`Clock8_2`���󣬲����ɵĶ����Ƶ��µĶ����У�Ȼ�󷵻��µĶ������ַ�ʽЧ�ʽϵͣ���Ϊ��Ҫ���и��Ʋ�����

	������`&`������������صľ���`Clock8_2`���͵��������͡������ڵ���`++`��������ʱ�򣬾Ͳ��ᴴ���µĶ��󣬶���ֱ�ӷ��ؾɵĶ�������á����ַ�ʽЧ�ʽϸߣ���Ϊ����Ҫ���и��Ʋ�����

	��ˣ���`&`�ķ�ʽ���Ƽ�ʹ�á�

Q:	�������ΪʲôClock8_2 operator++(int������û��&?

A:	�� C++ �У�����ʹ��`++`������ʱ�������ַ�ʽ����ʵ�֣�ǰ׺�����ͺ�׺������ǰ׺��������������Ȼ�󷵻�������Ľ������׺�������ȷ��ص�ǰ��ֵ��Ȼ����������

	����ǰ׺����������Ҫ�������ã���Ϊ����Ҫ�ڷ���ֵ�Ͻ�����������������㷵��ֵ����ô����޷��ڷ���ֵ�Ͻ���������������Ϊ����ֵ��һ����ʱ�������޷��޸�����ֵ��

	���ں�׺�������㲻��Ҫ�������ã���Ϊ���Ѿ������˵�ǰ��ֵ��Ȼ���ٽ���������������ˣ���ֻ��Ҫ����һ���µ�`Clock8_2`���󣬶��������á�

	��ˣ�`Clock8_2 operator++(int)`����û��`&`������Ϊ���Ǻ�׺����������Ҫ�������á�
*/