#include <iostream>
#include <cmath>
#include <iomanip>
#include "8.h"

using namespace std;

double MyFunction8_7::operator() (double x) const {
	return log(1.0 + x) / (1.0 + x * x);
}
double Trapz8_7::operator() (double a, double b, double eps) const {
	bool done = false;
	int n = 1;
	double h = b - a;
	double tn = h * (f(a) + f(b)) / 2;//n=1时积分的值
	double t2n;
	do {
		double sum = 0;
		for (int k = 0; k < n; k++) {
			double x = a + (k + 0.5) * h;
			sum += f(x);
		}
		t2n = (tn + h * sum) / 2.0;
		if(fabs(t2n - tn) < eps)
			done = true;
		else
		{
			tn = t2n;
			n *= 2;
			h /= 2;
		}
	} while (!done);
	return t2n;
}
void test8_7() {
	MyFunction8_7 f;
	Trapz8_7 trapz(f);
	cout << "Trapz Int:" << setprecision(7) << trapz(0, 2, 1e-7) << endl;
}