

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float  x;
	printf("vyvedi  x \n x= ");
	scanf_s("%f", &x);
	
	double y = ((pow(x, 2) - (6 * x) + 9) / ((pow(x, 4)) + (2 * pow(x, 2))));
	printf("y = %.2f", y);
}
