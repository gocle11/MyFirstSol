#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void test_function() {
	int j;
	printf("stack high \t%llu\n", (unsigned long long) & j);
}
int main()
{
	const char* pt2 = "I am a string!.";
	const char* pt3 = "I am a string!.";
	const char* pt4= "I am a string!!!!.";

	const char arr1[] = "I am a string!.";
	const char arr2[] = "I am a string!.";
	const char arr3[] = "I am a string!!.";

	printf("rodata low \t %llu  %llu  %llu\n", (unsigned long long) pt2, (unsigned long long) pt3, (unsigned long long) pt4);

	printf("stack high \t %llu  %llu  %llu\n", (unsigned long long) arr1, (unsigned long long) arr2, (unsigned long long) arr3);

	return 0;
}     
