#include <stdio.h>

	int main() {
		/*int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[2]);
	printf("%i", int_arr[10000]);*/

		char c = 'a';
		char str1[10] = "Hello";
		char str2[10] = { 'H','i' };
		char str3[5] = "Hello";

		printf("%c\n", c);
		printf("%s", str1);
		printf("%s\n", str2);
		printf("%s\n", str3);
		printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

		char str4[20]="Hello, \0World";
		printf("%s\n", str4);

		return 0;

	}


