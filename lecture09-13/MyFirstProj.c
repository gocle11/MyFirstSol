#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable:4700) 

int main()
{
	//int a, b;
	//a = 123;
	//int *a_ptr;

	//a_ptr = &a;

	//printf("%d %d %p\n", a, *a_ptr, a_ptr);


	/*int *ptr = 1234;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);*/

	/*int a;
	printf("%d\n", a);
	printf("%x\n", a);*/

	int a = 3, b = 5, c = 7, d = 9;
	int* a_ptr = &a, * b_ptr = &b, *c_ptr = &c, *d_ptr = &d; 
	printf("%p %p %p %p \n", &a, &b, &c, &d);




	return 0;
}     
