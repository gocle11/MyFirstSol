#include <stdio.h>

int main()
{
	/*int i = 1024;

	i = i + 10;
	i += 10;

	i = i * (1 + 2);
	i *= 1 + 2;

	for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n) {
		printf("%d %d\n", n, nsqr);
	}*/

	int i, j;
	i = 1;
	i++, j = i;//comma is a sequence point
	printf("%d %d\n", i, j);


	


	return 0;
}     
