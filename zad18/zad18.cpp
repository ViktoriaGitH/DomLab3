
#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float a, b, n, l;
	printf("vyvedi  a , b , n i l \n a= ");
	scanf_s("%f", &a);
	printf(" b= ");
	scanf_s("%f", &b);
	printf(" l= ");
	scanf_s("%f", &l);
	printf("n= " );
	scanf_s("%f", &n);

	double m = (a + sqrt((pow(b, 2)) + pow(l, (a + b)))) / (1 + (l * n * b));
	printf("m = %.2f", m);
}