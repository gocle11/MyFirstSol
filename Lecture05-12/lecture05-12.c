#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n);

int main()
{
	int i = 5;
	char c = '#';
	float f = 7.1f;
	
	draw(i);
	draw((int)c);
	draw((int)f);

	//Arguments 인수 vs parameters 매개변수
	// actual arguments 실인수, actual parameter 실매개변수 -> arguments(values)
	// formal arguments 형식 인수, formal parameter 형식매개변수 -> parameter(variables)

	return 0;
}     

void draw(int n) {
	/*int s = 0;
		while (s++ < n) {
			printf("*");
		}*/
	while (n++ > 0) {
		printf("*");
	}
	printf("\n");
}
