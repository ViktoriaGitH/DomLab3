

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float  x;
	printf("vyvedi  x \n x= ");
	scanf_s("%f", &x);
	

	double y = pow(x, 2) - (4 * x) - 5;
	printf("y = %.2f", y);
}
