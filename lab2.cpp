// Лабораторна2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include <Windows.h>

int main()
{
	double x = 2,y;

	do {
		y = (cos(x + 1 / sin(1 / x*x)) / sin(x + 1 / sin(1 / x*x)));
		printf("%.2lf if x = %.1lf \n", y, x);
		x += 0.2;
	} while (x >= 2 && x <3);
	do {
		y = log10(log(x)) + (log(x) / log(3));
		printf("%.2lf if x = %.1lf\n", y,x);
		x += 0.2;
	} while (x >= 3 && x < 4);
	do
	{
		y = cos(5 * x*x);
		printf("%.2lf if x = %.1lf	\n", y,x);
		x += 0.2;
	} while (x >= 4 && x <= 5);
	system("pause");

    return 0;
}

