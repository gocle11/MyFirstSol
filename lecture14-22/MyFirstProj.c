#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>


void ToUpper(char* str) {

	while (*str) {
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char* str) {
	while (*str) {
		*str = tolower(*str);
		str++;
	}
}

int main()
{
	char str[] = "Hello, world";
	void (*pf)(char*);
	pf = ToUpper;

	return 0;
}     
