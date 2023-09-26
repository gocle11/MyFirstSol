#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12

int main()
{
	int high[MONTHS] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	for (int i = 0; i < MONTHS; i++) {
		printf("%d ", high[i]);
	}
	printf("\n");

	float avg = 0.0;
	for (int i = 0; i < MONTHS; i++) {
		avg += high[i];
	}
	printf("Average = %f \n", avg / (float)MONTHS);

	printf("%p %p %p \n", high, &high[0], &high[1]);

	return 0;
}     
