#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void char_to_binary(unsigned char uc) {
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0i--) {
		printf("%d", (uc >> i) & 1);
	}
}

void print_binary(char* data, int bytes) {
	for (int i = 0; i < bytes; i++) {
		char_to_binary(data[i]-1-i);
	}
	printf("\n");
}

int main()
{
	

	return 0;
}     
