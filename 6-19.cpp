#include <iostream>
using namespace std;

void test6_19() {
	float(*cp)[9][8] = new float[5][9][8];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++) {
				*(*(*(cp + i) + j) + k) = static_cast<float>(i * 100 + j * 10 + k);
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++) {
				cout << cp[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}