

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float y, x;
	printf("vyvedi a i x \n x= ");
	scanf_s("%f", &x);
	printf(" y= ");
	scanf_s("%f", &y);

	double z = sqrt((x * y) - 8 + y - (8 * pow(x, 3)));
	printf("y = %.2f", z);
}
