#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

#define NUM_DAYS 365

int compute_pow(int base, int exp);

int main()
{
	//char my_chars[] = "Hello, World!";

	//int daily_temperature[NUM_DAYS];  //8* 365
	//double stock_price_history[NUM_DAYS];

	//int my_arr[5];

	/*for (int i = 0; i < 5; i++) {
		my_arr[i] = i;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", my_arr[i]);
	}*/

	/*printf("Enter %d numbers", 5);
	int number[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
	}
	for (int i = 0; i < 5; i++) {
		sum += number[i];
	}
	printf("Sum = %d\n",sum);*/

	int base, exp,result;
	while (scanf("%d %d", &base, &exp) ==2 ) {
		result = compute_pow(base, exp);
		printf("Result = %d\n", result);
	}



	return 0;
}     

int compute_pow(int base, int exp) {
	int result1 =1;

	for (int i = 0; i < exp; i++) {
		result1 *= base;
	}
	return result1;

}