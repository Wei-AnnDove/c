#pragma once
#include <iostream>
#include <string>
using namespace std;

class ExamInfo {
public:
	ExamInfo(string name, char graed, int test)
		:name(name), mode(Grade), grade(grade),test(test){}
	ExamInfo(string name,bool pass,int test)
		:name(name), mode(Pass), pass(pass), test(test) {}
	ExamInfo(string name, int percent, int test)
		:name(name), mode(Percentage), percent(percent), test(test) {}
	void show();
private:
	string name;//课程名称
	enum //计分方式
	{
		Grade,
		Pass,
		Percentage
	}mode;
	union {
		char grade;
		bool pass;
		int percent;
	};
	int test;//测试内嵌
};

void ExamInfo::show() {
	cout << name << ":";
	switch (mode)
	{
	case ExamInfo::Grade:cout << grade;
		break;
	case ExamInfo::Pass:
		cout << (pass ? "Pass" : "Fall");
		break;
	case ExamInfo::Percentage:cout << percent;
		break;
	default:
		break;
	}
	cout << endl;
	cout << "test内嵌测试:" << test << endl;
}
