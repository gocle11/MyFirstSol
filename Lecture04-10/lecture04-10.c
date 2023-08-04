#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>
#include <inttypes.h>

int main()
{
	/*int i;
	float f;
	char str[30];
	scanf("%d %f %s", &i, &f, str);
	printf("%d %f %s\n", i, f, str);*/

	//character
	//char c;
	//scanf("%c", &c);
	//printf("%i\n", c); //blank is 32

	//unsigned as signed
	//unsigned i;
	//scanf("%i", &i); //언사인드가 받을때 사인드로 받음. 
	//printf("%i\n", i);

	//unsigned i2;
	//scanf("%u", &i2); //받을때도 언사인드
	//printf("%u\n", i2);

	//double d = 0.0;
	//scanf("%lf", &d); //그냥 f이면 double과 사이즈가 안맞아서 문제발생
	//printf("%f\n", d);

	//길이
	/*char str[30];
	scanf("%5s", str);
	printf("%s\n", str);*/

	//char i;
	//scanf("%hhd", &i); //255 이상 넣으면 0
	//printf("%i\n", i);

	/*int i;
	scanf("%i", &i);
	printf("%i\n", i);*/

	/*intmax_t i;
	scanf("%ji", &i);
	printf("%ji", i);*/

	/*int a, b;
	scanf("%d ,%d", &a, &b);
	scanf("%dA%d", &a, &b);

	printf("%d %d", a, b);*/

	/*int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	printf("%d|%c|%d", a, c, b);*/

	//scanf의 리턴값
	int a, b;
	int i = scanf("%d%d", &a, &b); //아이템 2개
	printf("%d", i);


	return 0;
}     
