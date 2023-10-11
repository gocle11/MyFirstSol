#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct Aligned {
		int a;
		float b;
		double c;
	};

	struct Aligned a1, a2;

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n",sizeof(struct Aligned));

	return 0;
}     
