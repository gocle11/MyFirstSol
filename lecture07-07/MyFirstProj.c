#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>

int main()
{
	//bool test1 = 3 > 2 || 5 > 6;
	//bool test2 = 3 > 2 && 5 > 6;
	//bool test3 = !(5 > 6);

	//printf("%d %d %d \n", test1, test2, test3);

	/*char ch;
	int count = 0;
	while ((ch = getchar()) != '.') {
		if (ch != '\n') {
			count++;
		}
		
	}
	printf("%d", count);*/

	printf("Enter text : \n");
	char c;
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	bool line_flag = false;
	bool word_flag = false;

	while (( c = getchar()) != '.') {

		if (!isspace(c)) {
			n_chars++;
		}

		if (!isspace(c) && !line_flag) {
			n_lines++;
			line_flag = true;
		}

		if (c == '\n') {
			line_flag = false;
		}

		if (!isspace(c) && !word_flag) {
			n_words++;
			word_flag = true;
		}
		if (!isspace(c)) {
			word_flag = false;
		}

	}
	printf("Characters = %d, words = %d, Lines =%d \n", n_chars, n_words, n_lines);
	


	return 0;
}     
