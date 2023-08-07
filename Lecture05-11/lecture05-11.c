#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//promotions in assignments
	short s = 65;
	int i = s;
	float f = 3.14f;
	double d = f;

	//demotion in assignments
	d = 1.25;
	f = 1.25;
	//f = 1.123;

	//ranking of types in operations
	//long double > double > float
	//unsgined long long, long long
	//unsigned long, long
	//unsigned, int
	// short int, unsigned short int
	//signed char, char, unsigned char
	// _Bool
	d = f + 1.234;
	//f = f + 1.234;

	// autpmatic promotion of function arguments
	//1. functions without prototypes
	//2, Variadic functions (ellipsis)

	//casting operators
	d = (double)3.14f;
	i = 1.6 + 1.7;
	//printf("%d \n", i);
	i = (int)1.6 + (int)1.7;
	//printf("%d \n", i);

	// more example
	char c;
	f = i = c = 'A';
	printf("c: %c, d:%d, f:%f \n", c, i, f);
	c = c + 2;
	i = f + 2*c;
	printf("c: %c, d:%d, f:%f \n", c, i, f);
	c = 1106; //1106 = 0b10001010010, 0b01010010 = 1106%256 = 82 = 'R';
	printf("%c\n",c);
	c = 83.99;  //83, 'S'
	printf("%c\n",c);

	return 0;
}     
