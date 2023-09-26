#define _CRT_SECURE_NO_WARNIGS

#include <stdio.h>

int main()
{
	int r;
	int c;
	/*for (r = 0; r < 5; r++) {

		for (c = 'A'; c <= 'K'; c++) {
			printf("%c ", c);
		}
		printf("\n");
	}*/

	/*for (r = 0; r < 10; r++) {

		for (c = 'A'; c <= 'A' + r; c++) {
			printf("%c ", c);
		}
		printf("\n");
	}*/
	for (r = 0; r <12; r++) {

		for (c = 'A'; c <= 'L' - r; c++) {
			printf("%c ", c);
		}
		printf("\n");
	}

	return 0;
}     
