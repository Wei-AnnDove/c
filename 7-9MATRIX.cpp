#include "7-9MATRIX.h"
#include <iostream>
using namespace std;

void Matrix7_9::setMatrix7_9(const double* values) {
	for (int i = 0; i < size * size; i++)
		elements[i] = values[i];
}
Matrix7_9::Matrix7_9(int size/* =2 */) :size(size) {
	elements = new double[size * size];
}
Matrix7_9::~Matrix7_9() {
	delete[] elements;
}
void Matrix7_9::printMatrix7_9()const {
	cout << "The Matrix is:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << element7_9(i, j) << " ";
		cout<<endl;
	}
}

#include <cmath>
LinearEqu7_9::LinearEqu7_9(int size/* =2 */) :Matrix7_9(size) {
	sums = new double[size];
	solution = new double[size];
}
LinearEqu7_9::~LinearEqu7_9() {
	delete[] sums;
	delete[] solution;
}
void LinearEqu7_9::setLinearEqu7_9(const double* a, const double* b) {
	setMatrix7_9(a);
	for (int i = 0; i < getSize7_9(); i++) {
		sums[i] = b[i];
	}
}
void LinearEqu7_9::printLinearEqu7_9()const {
	cout << "The Line eqution is:" << endl;
	for (int i = 0; i < getSize7_9(); i++) {
		for (int j = 0; j < getSize7_9(); j++)
			cout << element7_9(i, j) << " ";
			cout << "  " << sums[i] << endl;
	}
}
void LinearEqu7_9::printSolution7_9()const {
	cout << "The Result is:" << endl;
	for (int i = 0; i < getSize7_9(); i++)
		cout << "x[" << i << "]=" << solution[i] << endl;
}
inline void swap(double& v1, double& v2) {
	double temp = v1;
	v1 = v2;
	v2 = temp;
}
bool LinearEqu7_9::solve7_9() {
	int size = getSize7_9();
	int* js = new int[size];//存储主元素所在列号的数组
	for (int k = 0; k < size - 1; k++) {//选主元素
		int is;//主元素所在行号
		double max = 0;
		for (int i = k; i < size; i++) {
			for (int j = k; j < size; j++) {
				double t = fabs(element7_9(i, j));//绝对值
				if (t > max) {
					max = t;
					js[k] = j;
					is = i;
				}
			}
		}
		if (max == 0) {
			delete[] js;
			return false;
		}
		else {
			if (js[k] != k)
				for (int i = 0; i < size; i++)//i=k?
					swap(element7_9(i, k), element7_9(i, js[k]));
			if(is!=k){
				for (int j = k; j < size; j++)
					swap(element7_9(k, j), element7_9(is, j));
				swap(sums[k], sums[is]);
			}
		}
		//消去
		double major = element7_9(k, k);
		for (int j = k + 1; j < size; j++)
			element7_9(k, j) /= major;
		sums[k] /= major;
		for (int i = k + 1; i < size; i++) {
			for (int j = k + 1; j < size; j++)
				element7_9(i, j) -= element7_9(i, k) * element7_9(k, j);
			sums[i] -= element7_9(i, k) * sums[k];
		}
		//判断剩下的元素是否为0
		double d = element7_9(size - 1, size - 1);
		if (fabs(d) < 1e-15) {
			delete[] js;
			return false;
		}
		//回代
		solution[size - 1] = sums[size - 1] / d;
		for (int i = size - 2; i >= 0; i--) {
			double t = 0.0;
			for (int j = i + 1; j <= size - 1; j++)
				t += element7_9(i, j) * solution[j];
			solution[i] = sums[i] - t;
		}
		js[size - 1] = size - 1;
		for (int k = size - 1; k >= 0; k--)
			if (js[k] != k) swap(solution[k], solution[js[k]]);
		delete[] js;
		return true;

	}
}

void testMATRIX7_9() {
	double a[] = {
		0.2368, 0.2471, 0.2568, 1.2671,
		0.1968, 0.2071, 1.2168, 0.2271,
		0.1581, 1.1675, 0.1768, 0.1871,
		1.1161, 0.1254, 0.1397, 0.1490 };
	double b[] = { 1.8470, 1.7471, 1.6471, 1.5471 };
	LinearEqu7_9 equ(4);
	equ.setLinearEqu7_9(a, b);
	equ.printLinearEqu7_9();
	if (equ.solve7_9())
		equ.printSolution7_9();
	else
		cout << "Fail" << endl;

}