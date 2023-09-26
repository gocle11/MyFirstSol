#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 20
#define NAME "JE-UN LEE"
#define ADDRESS "Seoul, Korea"

void print_bar(int n_stars) {
	for (int i = 0; i < n_stars; i++) {
		printf("*");
	}
	printf("\n");
}

int main()
{
	print_bar(WIDTH);
	printf("           JE-UN LEE\n");
	printf("        Seoul, Korea\n");
	print_bar(WIDTH);

	return 0;
}     
