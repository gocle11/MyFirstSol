﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char* str, int(*pf)(int));
void ToUpper(char* str);
void ToLower(char* str);
void Transpose(char* str);

int main()
{
	char options[] = {'u','l'};
	int n = sizeof(options) / sizeof(char);

	typedef void (*FUNC_TYPE)(char*);


	return 0;
}     
