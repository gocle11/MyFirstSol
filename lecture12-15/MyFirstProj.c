#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*int* ptr = NULL;
	ptr = (int*)malloc(1 * sizeof(int));
	if (!ptr) exit(1);
	free(ptr);
	ptr = NULL;*/

	int n = 3;
	int* ptr = (int*)malloc(n * sizeof(int));
	if (!ptr) exit(1);

	ptr[0] = 123;
	ptr[1] = 456;

	printf("%d %d \n", ptr[0], ptr[1]);
	//*(ptr + 1) = 456;
	//*(ptr + 2) = 789;

	free(ptr);
	ptr = NULL;


	return 0;
}     
