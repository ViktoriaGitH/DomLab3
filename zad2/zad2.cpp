#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	int y, x;
	printf("vyvedi y i x \n x= ");
	scanf_s("%d", &x);
	printf(" y= ");
	scanf_s("%d", &y);

	int z = (pow((x + y)(x - y)) , (1 / 5))/ (2*x) ;
	printf("z = %.2d", z);
}

