#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 41

struct person {
	char name[MAX];
	int age;
	float height;
};

int main()
{
	int flag;

	struct person genie;

	strcpy(genie.name, "Will Smith");
	genie.age = 1000;

	flag = scanf("%f", &genie.height);
	printf("%f\n", genie.height);

	struct person princess = { "Naomi Scott", 18,160.0f };

	struct person beauty = {
		.age = 19,
		.name = "Bell",
		.height=150.0f
	};

	struct person* some;
	some = &genie;
	some->age = 1001;
	printf("%s %d \n",some->name, (*some).age);



	return 0;
}     
