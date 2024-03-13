#pragma once
#include <iostream>
#include <cmath>
using namespace std;


class SavingsAccount {
private:
	int id;
	double balance;//余额
	double rate;
	int lastDate;
	double accumulation;//余额按日期累加，方便最后直接/365算利息
	void record(int data, double amount);
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	SavingsAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }
	void deposit(int date, double amount);//存
	void withdraw(int date, double amount);//取
	void settle(int date);//结算利息
	void show();
};

SavingsAccount::SavingsAccount(int date, int id, double rate) :id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << " is created" << endl;
}

void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;//小数点两位
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

void SavingsAccount::deposit(int date, double amount) {
	record(date, amount);
}

void SavingsAccount::withdraw(int date, double amount) {
	if (amount > getBalance())
		cout << "?" << endl;
	else
		record(date, -amount);
}

void SavingsAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show() {
	cout << "#" << id << "\tBalance" << balance << endl;
}






