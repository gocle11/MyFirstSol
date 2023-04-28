#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>	// 이미 inttypes.h에 포함되어 있음
#include <inttypes.h>		
// printf문 사용시 형식 지정자를 사용해야 하는데 고정 너비 정수형의 형식 지정자를
// 모름 -> 그걸 미리 정의해놓은게 inttypes.h

int main()
{
	int i;
	int32_t i32;		// int의 크기를 32bit로 고정시킴 -> i32는 어느 시스템에 가더라도 32bit
	int_least8_t i8;	// 적어도 8bit를 가지고 있는 type
	int_fast8_t f8;		// 8bit중 가장 빠른거
	intmax_t imax;		// signed int 중 가장 큰 int
	uintmax_t uimax;	// unsigned int 중 가장 큰 int

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);	// printf문 안의 문자열(""안의 문자열)을 3개로 나눔
	printf("me32 = %" PRId32 "\n", i32);	// 형식 지정자를 메크로로 바꿈
	// PRI(print)d(decimal)32(32bit 정수) -> 32bit 정수를 출력해라


	char c = 'A';		// 문자 하나는 작은 따옴표로 표현
	char d = 65;		// d = 'A' -> 65는 'A'에 대응하는 숫자
	char e = '*';

	printf("%c %hhd\n", c, c);	// 문자는 문자, 숫자 각각의 형태로 출력 가능
	printf("%c %hhd\n", d, d);
	printf("%c %hhd\n", e, e);

	printf("%c \n", c + 1);		// 문자와 정수를 혼용해서 사용 가능


	char a = '\a';		// 이스케이프 시퀀스. 실행시 종소리가 울리게 함
	printf("%c", a);
	// \a 의 ASCII code는 7
	printf("\07");		// 8진수 7
	printf("\x7");		// 16진수 7

	printf("\x23");		// # 출력

	float salary;
	printf("$______\b\b\b\b\b\b");	// _를 6개 출력 후 6칸 전으로 돌아감
	scanf("%f", &salary);		// scanf 입력을 $옆의 첫번째 _에서 기다림

	return 0;
}