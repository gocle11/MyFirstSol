#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	double d = 3.1415926535897932384626433832795028841971693993751058209749445;
	printf("Hello, World!\n");

	printf("%c\n", 'A');
	printf("%s\n","I love you");
	printf("i love \
you, !");

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX,UINT_MAX);
	printf("%u %u %u \n", 1024, -1, UINT_MAX);

	printf("\n");
	printf("%f %f %lf \n", 3.141592f, d, d);

	return 0;
}     
