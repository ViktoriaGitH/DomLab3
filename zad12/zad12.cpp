

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float  x;
	printf("vyvedi a i x \n x= ");
	scanf_s("%f", &x);
;

double y = 5 / (pow(x, 5) - (3 * (sqrt(2 * x))));
	printf("y = %.2f", y);
}
