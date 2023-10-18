

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float  x;
	printf("vyvedi  x \n x= ");
	scanf_s("%f", &x);
	

	double y = (((3 * x) - 1) / (pow(x, 2) - 4)) / (1 / (x - 2));
	printf("y = %.2f", y);
}
