#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int k);
void static_count();

int main()
{
	auto int a;
	a = 1024;

	int i = 1;
	int j = 2;

	printf("i %lld  %d \n", (long long)&i,i);

	{
		int i = 3; //name hiding
		printf("i %lld  %d \n", (long long)&i, i);

	}
	printf("i %lld  %d \n", (long long)&i, i);

	register int r;
	r = 123;

	//int* ptr = &r; 불가능

	func(5);


	int ct = 0;
	printf("count = %d %lld\n", ct, (long long)&ct);
	ct++;
	static_count();
	static_count();
	static_count();
	

	return 0;
}     


void func(int k) {
	int i = k * 2;
	printf("i %lld  %d \n", (long long)&i, i);
}

void static_count() {
	static int ct = 0; //staitc은 단한번만 초기화가 된다.
	printf("static count = %d %lld\n", ct, (long long)&ct);
	ct++;
}
