#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//char* name = "";
	/*char name[128];
	int result = scanf("%s", name);*/

	/*char words[128] = "";
	gets(words);
	printf("START\n");
	printf("%s ", words);
	puts(words);
	puts("END.");*/

	/*char words[5] = "";
	fgets(words, 5, stdin);

	int i = 0;
	while (words[i] != '\n' && words[i] != '\0') {
		i++;
		if (words[i] == '\n') {
			words[i] = '\0';
		}
	}
	fputs(words, stdout);
	fputs("END", stdout);*/

	/*char small_array[5];
	puts("Enter long strings : ");
	fgets(small_array, 5, stdin);

	fputs(small_array, stdout);*/

	/*char small_array[5];
	puts("Enter long strings: ");
	while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n') {
		fputs(small_array, stdout);
	}*/


	char str1[6], str2[6];
	int count = scanf("%5s %5s", str1, str2);
	printf("%s|%s \n", str1, str2);


	return 0;
}     
