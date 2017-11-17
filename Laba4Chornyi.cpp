// Laba4Chornyi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<cstdlib>
#define n 5


using namespace std;

class Matrix
{
private:
	int matrix[n][n];
	int prod[n];
	int i, j, k, element, new_element;
	float sum1, ar_m;
public:
	void matrix_input();
	void matrix_output();
	void matrix_sorting();
	void product_and_arithmetic_mean();
};

void Matrix::matrix_input()
{
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "Please, enter the element [" << i + 1 << ";" << j + 1 << "]";
			cin >> matrix[i][j];
			cout << endl;
		}
	}
}

void Matrix::matrix_output()
{
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << matrix[i][j] << "\t";
		}
	}
}

void Matrix::matrix_sorting()
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			element = matrix[i][j];
			new_element = j;
			for (k = j + 1; k < n; k++)
			{
				if (matrix[i][k] > element)
				{
					new_element = k;
					element = matrix[i][k];
				}
			}
			matrix[i][new_element] = matrix[i][j];
			matrix[i][j] = element;
		}
	}
}

void Matrix::product_and_arithmetic_mean()
{
	for (j = 0; j < n; j++) {
		prod[j] = 1;
		for (i = 0; i < n; i++) {
			prod[j] *= matrix[i][j];
		}
		ar_m += prod[j];
		cout << " Product of column " << (j + 1) << " is " << prod[j] << endl;
	}
	cout << "Arithmetic mean = " << (ar_m / 5);
}


int main()
{
	Matrix X;
	X.matrix_input();
	cout << endl;
	cout << "Entered matrix:\n";
	X.matrix_output();
	cout << endl;
	X.matrix_sorting();
	cout << "\n New matrix:\n";
	X.matrix_output();
	cout << endl;
	cout << "\n Summation:\n";
	X.product_and_arithmetic_mean();
	cout << endl;
	system("pause");
}

