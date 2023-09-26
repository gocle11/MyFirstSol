#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;


	ptr1 = arr;
	printf("%p %d %p \n", ptr1, *ptr1, &ptr1);

	ptr3 = ptr1 + 4;
	printf("%p %d %p \n", ptr3, *ptr3, &ptr3);

	printf("%d \n", ptr3 - ptr1);
	printf("%td \n", ptr3 - ptr1);

	ptr1[0] = 150;

	printf("%d\n", arr[0]);

	const int c = 11;

	int* ptr5 = &c;

	*ptr5 = 12;
	printf("%d", c);

	return 0;
}     
