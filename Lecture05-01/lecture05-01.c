#include <stdio.h>

int main()
{
	int n = 1;

//lable:
//	printf("%d\n", n);
//	n = n + 1;
//
//	if (n == 10) goto out;
//	goto lable;
//
//out:
	while (n < 11) {
		printf("%d\n", n);
		n = n + 1;
	}

	return 0;
}     
