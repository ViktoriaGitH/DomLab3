

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	float a;
	printf("vyvedi a  \n a= ");
	scanf_s("%f", & a);


	double y = sqrt((pow(a, 2) + 4) / (2 * a));
	printf("y = %.2f", y);
}
