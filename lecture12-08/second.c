#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int g_int;

void fun_sec() {

	g_int += 7;
	printf("g_gint in fun_sec() %d %p \n", g_int, &g_int);
}