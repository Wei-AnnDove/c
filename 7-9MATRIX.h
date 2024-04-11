#pragma once
#ifndef _MATRIX_H
#define _MATRIX_H
class Matrix7_9 {
public:
	Matrix7_9(int size = 2);
	~Matrix7_9();
	void setMatrix7_9(const double* values);
	void printMatrix7_9() const;
	int getSize7_9() const { return size; }
	double& element7_9(int i, int j) { return elements[i * size + j]; }
	double element7_9(int i, int j)const { return elements[i * size + j]; }
private:
	int size;//�����С
	double* elements;//�����������׵�ַ
};
#endif // !_MATRIX_H


#ifndef _LINEAR_RQU_H
#define _LINEAR_RQU_H
class LinearEqu7_9 :public Matrix7_9 {
public:
	LinearEqu7_9(int size = 2);
	~LinearEqu7_9();
	void setLinearEqu7_9(const double* a, const double* b);
	bool solve7_9();//ȫѡ��Ԫ��˹��ȥ����ⷽ��
	void printLinearEqu7_9() const;
	void printSolution7_9() const;
private:
	double* sums;//�����Ҷ���
	double* solution;//���̵Ľ�
};
#endif // !_LINEAR_RQU_H

void testMATRIX7_9();