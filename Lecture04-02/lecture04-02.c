#include <stdio.h>

int main()
{	//sizeof basic type
	/*int a = 0;

	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("size of int type is %u bytes. \n", int_size1);
	printf("size of int type is %zu bytes. \n", int_size4);
	printf("size of float type is %u bytes. \n", float_size);*/

	//sizeof array
	//int int_arr[30];
	//int *int_ptr = NULL;
	//int ptr = (int*)malloc(sizeof(int) * 30);

	//printf("Size of array = %zu byte \n", sizeof(int_arr));
	//printf("Size of pointer = %zu byte \n", sizeof(int_ptr));


	//sizeof character array

	char c = 'a';
	char string[10];

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);


	printf("Size of char = %zu byte \n", char_size);
	printf("Size of string = %zu byte \n", str_size);

	return 0;
}     
