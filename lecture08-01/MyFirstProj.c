#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	/*char c;

	while ((c = _getche()) != '.') {
		putchar(c);
	}*/

	/*int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}*/

	//printf("I love apple \n");

	int count = 0;
	while (1) {
		printf("Current count is %d. Continue? (y/n) \n", count);

		if (getchar() == 'n') {
			break;
		}
		while (getchar() != '\n') {
			continue;
		}
		count++;
	}

	

	return 0;
}     
