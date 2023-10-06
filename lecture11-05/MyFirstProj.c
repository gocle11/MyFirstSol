#define TEST "A string from #define."
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void custom_put(const char* str);
int custom_put2(const char* str);

int main()
{
	/*char str[60] = "String array initioalized";
	const char* ptr = "A Pointer initialized";

	puts("String without \\n");
	puts("END");

	puts(TEST);
	puts(TEST+5);

	puts(&str[3]);
	puts(ptr + 3);*/

	/*char str[] = { 'H','I','!' };
	puts(str);*/

	/*char line[100];
	while (gets(line)) {
		puts(line);
	}*/

	/*char line[100];
	while (fgets(line, 100, stdin)) {
		fputs(line, stdout);
	}*/

	/*char str[] = "Just do it, do it!";
	printf("%s\n", str);
	puts(str);*/

	char input[100] = "";
	int ret = scanf("%10s", input);
	printf("%s\n", input);
	ret = scanf("%10s", input);
	printf("%s\n", input);

	return 0;
}     


void custom_put(const char* str) {
	while (*str != '/0') {
		putchar(*str++);
	}
}

int custom_put2(const char* str) {
	int count = 0;
	while (*str != '/0') {
		putchar(*str++);
		count++;
	}
	putchar('/n');

	return count;
}