#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	//const volatile,restrict

	// c99  idempotent
	const const const int n = 6;
	typedef const int zip;
	const zip q =8;


	//const int i;
	//i = 12;  에러

	float f1 = 3.14f, f2=1.2f;


	const float* pf1 = &f1;
	//*pf1 =0.6f 에러
	pf1 = &f2; //가능

	float* const pf2 = &f2;
	*pf2 = 6.0f; //가능
	//pf2 = &f2 에러

	volatile int vi = 1;
	volatile int* pvi = &vi;

	





	return 0;
}     
