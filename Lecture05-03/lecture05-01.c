#include <stdio.h>

int main()
{
	printf("%d\n",1+2);

	int income, salary, bonus;

	income = salary = bonus = 100;

	salary = 100;
	bonus = 30;

	income = salary + bonus;

	int takehome, tax;
	tax = 20;
	takehome = income - tax;

	int a, b;
	a = -7;
	b = -a; // - 단항 연산
	b = +a; //+는 아무 기능하지않음

	1.0f + 2;

	return 0;
}     
