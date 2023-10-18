

#include <iostream>
#include <cmath>

int main()
{
	float a, x;
	printf("vyvedi a i x \n a= ");
	scanf_s("%f", &a);
	printf(" x= ");
	scanf_s("%f", &x);
	
	double y = (sqrt(sqrt(pow(a, 3)) + pow((x+5),3)))/(abs(a));
	printf("y = %.2f", y);
}

