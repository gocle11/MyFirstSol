﻿#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%u\n", sizeof(_Bool));//1Byte

	_Bool b1;

	b1 = 0;
	b1 = 1;

	printf("%d\n", b1);

	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d \n", b2,b3);

	return 0;
}     
