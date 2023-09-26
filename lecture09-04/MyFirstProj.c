#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int int_max(int i, int j) {
	int m;
	m = i > j ? i : j;
	return m;
}

int main()
{
	int a;

	a = int_max(1, 2);
	printf("%d\n", a);
	printf("%p\n", &a);

	{
		int b;
		b = int_max(4, 5);
		printf("%d\n", b);
		printf("%p\n", &b);

		{
			int b = 123;
			printf("%d\n", b);
			printf("%p\n", &b);
		}

		{
			int c = 456;
			printf("%d\n", c);
			printf("%p\n", &c);
		}
	}

	return 0;
}     
