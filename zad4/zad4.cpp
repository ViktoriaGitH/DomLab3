

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float  x;
	printf("vyvedi  x \n x= ");
	scanf_s("%f", &x);


	double y = (pow(x, (-1 / 3)) * pow(x, 2)) / ((2 * x) - 1);
	printf("y = %.2f", y);
}
