

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float a, b;
	printf("vyvedi a i b \n a= ");
	scanf_s("%f", &a);
	printf(" b= ");
	scanf_s("%f", &b);

	double y = ((pow(a, 2) - b + 1) / (pow(b, 3) + (2 * pow(a, 3))));
	printf("y = %.2f", y);
}
