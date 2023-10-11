#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*double* ptr = NULL;
	ptr = (double*)malloc(30 * sizeof(double));

	if (ptr == NULL) {
		puts("Memory allcation failed");

		exit(EXIT_FAILURE);
	}

	free(ptr);
	ptr = NULL;*/

	printf("Dummy Output\n");

	for(int k=0;k<10000;k++)
	{
		int n = 100000000;
		int* ptr = (int*)malloc(n * sizeof(int));
//		printf("Dummy Output2\n");

		if (!ptr) {
			printf("malloc() failed \n");
			exit(EXIT_FAILURE);
		}

		for (int i = 0; i < n; i++) {
			ptr[i] = i + 1;
		}
//		printf("Dummy Output3\n");
		//free(ptr);
	}

	printf("Dummy Output4\n");

	return 0;
}     
