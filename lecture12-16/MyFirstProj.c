#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10;
	int* ptr = NULL;

	ptr = (int*)calloc(n, sizeof(int)); //contiguous allocation

	if (!ptr) {
		exit(1);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");

	n = 20;
	int* ptr2 = NULL;
	ptr2 = (int*)realloc(ptr, n * sizeof(int));
	//ptr = (int*)realloc(ptr, n * sizeof(int));

	printf("%p %p \n", ptr, ptr2);

	if (!ptr2)
		exit(1);
	else
		ptr = NULL;

	for (int i = 0; i < n; i++) {
		printf("%d ", ptr2[i]);
	}
	printf("\n");
	free(ptr2);

	return 0;
}     
