#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void add_value(int arr[], int n, int val) {
	int i;
	for (i = 0; i < n; i++) {
		arr[i] += val;
	}
}

int sum(const int ar[], int n) {
	int i;
	int total = 0;
	for (i = 0; i < n; i++) {
		total += ar[i];
	}
	return total;
}

int main()
{
	//int arr[] = { 1,2,3,4,5 };
	

	/*int n = sizeof(arr) / sizeof(arr[0]);
	print_array(arr, 5);
	add_value(arr,5, 100);
	print_array(arr, 5);*/



	/*int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	int* parr[2] = { arr0,arr1 };

	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 3; i++) {
			printf("%d ( ==%d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr+j)+i));
		}
	}*/

	/*int arr[2][3] = { {1,2,3},{4,5,6} };
	int* parr0 = arr[0];
	int* parr1 = arr[1];

	for (int i = 0; i < 3; i++) {
		printf("%d ", parr0[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d ", parr1[i]);
	}*/


	/*int arr[2][3] = { {1,2,3},{4,5,6} };
	int* parr[2];
	parr[0] = arr[0];
	parr[1] = arr[1];

	printf("%d", *(parr[1]+2));

	printf("%d", *(*(parr+1)));*/

	char* name[] = { "Aladdin","Jasmine","Magic Carpet","Genie" };
	const int n = sizeof(name) / sizeof(char*);
	printf("%d %d %d\n", sizeof(name), sizeof(char*), n);

	for (int i = 0; i < n; i++) {
		printf("%s at %u\n", name[i], (unsigned)name[i]);
	}
	printf("\n");

	char aname[][15] = { "Aladdin","Jasmine","Magic Carpet", "Genie","Jafar" };

	const int an = sizeof(aname) / sizeof(char[15]);
	printf("%d %d %d\n", sizeof(aname), sizeof(char[15]), an);

	for (int i = 0; i < an; i++) {
		printf("%s at %u\n", aname[i], (unsigned)& aname[i]);
	}






	return 0;
}     
