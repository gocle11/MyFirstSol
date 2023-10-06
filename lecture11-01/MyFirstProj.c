#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MESSAGE "A symbolic string content"
#define MAXLENGTH 81

int main()
{
	char words[MAXLENGTH] = "A string in an array";
	const char* pt1 = "A pointer to a string.";

	puts("puts() add a new line ata the end: ");
	puts(MESSAGE);
	puts(words);
	puts(pt1);
	words[3] = 'p';
	puts(words);

	char greeting[50] = "Hello, and" " Hoew are" " you";
	puts(greeting);

	printf("%s  %p  %c \n", "We", "are", *"exellent");

	return 0;
}     
