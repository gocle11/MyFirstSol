#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_int; //external variable
double g_arr[1000] = { 0,0, };


int x = 5;
int y = 1 + 2;
size_t z = sizeof(int);

//int x2=2+x;  external 변수는 식에 변수가 들어가면 안됨

void fun_sec();

void fun() {
	printf("g_gint in fun() %d %p \n", g_int, &g_int);
	g_int += 10;
}

int main()
{
	//extern double g_arr[];

	printf("g_gint in main() %d %p \n", g_int, &g_int);

	g_int++;
	fun();
	printf("g_gint in main() %d %p \n", g_int, &g_int);

	fun_sec();
	

	return 0;
}     
