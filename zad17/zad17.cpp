

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float y, x, e;
	printf("vyvedi  x , y i e \n x= ");
	scanf_s("%f", &x);
	printf(" y= ");
	scanf_s("%f", &y);
	printf(" e= ");
	scanf_s("%f", &e);

	double k = (pow(((x * 2) + (y / 2)), (1 / 3))) + pow(e, (sqrt((2 * x) + y)));
	printf("k = %.2f", k);
}
