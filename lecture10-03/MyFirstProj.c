#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int* ptr = 0;

	printf("%p %lld \n", ptr, (long long)ptr);

	ptr++;
	printf("%p %lld \n", ptr, (long long)ptr);


	return 0;
}     
