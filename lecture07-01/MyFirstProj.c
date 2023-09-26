#include <stdio.h>
#include <ctype.h>

int main()
{
	/*char ch;
	ch = getchar();
	putchar(ch);*/

	//char ch= getchar();

	//while (ch != '\n') {

	char ch;
	while ((ch= getchar()) != '\n') {
		if (ch == 'f') {
			ch = 'X';
		}


		putchar(ch);

	}

	putchar(ch);

	return 0;
}     
