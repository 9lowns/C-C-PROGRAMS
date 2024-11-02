#include <stdio.h>

int main ()
{
	float base, height, tri;

	printf("Enter the base of the pizza slice: ");
	scanf("%f",&base);

	printf("Enter the height of the pizza slice: ");
	scanf("%f",&height);

	tri = (base * height) / 2;

	printf("Area of the pizza slice = %.2f\n",tri);

	return 0;
}