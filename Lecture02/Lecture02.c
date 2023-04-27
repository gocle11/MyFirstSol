#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void say_hello(void);

int main()
{
    //int x, y, z;

    //x = 1;
    //y = 20;
    //z = 3;

	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;	// 뒤의 U, L, LL은 생략 가능 (리터럴의 자료형을 표현해주는 기호들)
	long l = 65537L;
	long long ll = 12345678908642LL;

	printf("char = %hhd, %d, %c\n", c, c, c);	// %c는 변수를 문자로 출력함
	printf("short = %hhd, %hd, %d\n", s, s, s);	// hhd(char)는 -128 ~ 127까지 표현 가능. overflow 발생
	printf("unsigned int = %u, %d\n", ui, ui);	// d(signed int)는 표현 범위가 unsigned int와 달라서 overflow 발생
	printf("long = %ld, %hd\n", l, l);		// hd(short)는 long보다 표현 범위가 작음 -> overflow
	printf("long long = %lld, %ld\n", ll, ll);	// long은 long long보다 표현 범위가 작음 -> overflow

	return 0;

}
//void say_hello(void) {
//    printf("Hello, World!\n");
//}


