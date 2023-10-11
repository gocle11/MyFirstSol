#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

DWORD WINAPI ThreadFuc(void* data) {
	int n = 1;
	Sleep(1000);

	printf("Printing from Thread \n");
	return 0;
}

int main()
{
	printf("Hello, World!");

	return 0;
}     
