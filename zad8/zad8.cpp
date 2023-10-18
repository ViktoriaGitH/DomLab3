

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float  x;
	printf("vyvedi  x \n x= ");
	scanf_s("%f", &x);


	double y = 5 + (((2 * pow(x, 3)) - (8 * x)) / sqrt(x));
	printf("y = %.2f", y);
}
