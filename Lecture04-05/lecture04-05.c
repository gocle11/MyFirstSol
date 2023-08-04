#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define PI 3.141592f //등호를 붙이지 말고 선언, manifest constants, symblic constants

int main()
{
	const char aiName[] = "Jarvice";
	float radius, area;

	printf("Input radius \n");

	scanf("%f", &radius);

	area = 3.141592 * radius * radius;

	printf("Area if %f\n",area);

	return 0;
}     
