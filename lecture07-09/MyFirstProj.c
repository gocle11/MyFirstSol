#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	/*int temp;
	temp = true ? 1024 : 7;
	printf("%d\n", temp);

	temp = false ? 1024 : 7;
	printf("%d\n", temp);*/


	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d ", i);

		/*if (i != 5) {
			printf("%d ", i);
		}*/
	}

	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		printf("%d ", i);

	
	}

	return 0;
}     
