#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{
	/*char msg[] = "Just,"" do it!";
	puts(msg);
	printf("length %d\n", strlen(msg));
	fit_str(msg, 4);
	puts(msg);
	printf("length %d\n", strlen(msg));*/

	/*char str1[100] = "First string";
	char str2[] = "Second string";
	strcat(str1, ", ");
	strcat(str1, str2);

	puts(str1);*/


	/*printf("%d\n", strcmp("A", "A"));
	printf("%d\n", strcmp("A", "B"));
	printf("%d\n", strcmp("B", "A"));
	printf("%d\n", strcmp("Hello", "Hello"));
	printf("%d\n", strcmp("Banana", "Bananas"));
	printf("%d\n", strcmp("Bananas", "Banana"));
	printf("%d\n", strncmp("Bananas", "Banana", 6));*/

	/*char dest[100] ="";
	char source[] = "Start progrmming!";
	  // dest = source;
	//dest = "Start progrmming!";
	//strcpy(dest, source);
	//strncpy(dest, source,5);
	//strcpy(dest, source+6);
	strcpy(dest, source);
	strcpy(dest +6, "cod");
	puts(dest);*/

	/*char str[100] = "";
	int i = 123;
	double d = 3.14;
	sprintf(str, "%05d.png %f", i, d);
	puts(str);*/

	/*printf("%s\n", strchr("Hello, World", 'W'));
	printf("%s\n", strpbrk("Hello, World", "ABCDE"));
	printf("%s\n", strpbrk("Hello, World", "abcde"));

	printf("%s\n", strrchr("Hello, World, Hello, World,", 'l'));

	printf("%s\n", strrchr("Hello, World, Hello, World,", 'l'));*/

	//선택정렬

	int arr[] = { 64,25,12,22,11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);

	printArray(arr, n);


	return 0;
}     

void printArray(int arr[],int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
	}
}


void fit_str(char* str, unsigned int size) {
	if (strlen(str) > size) {
		str[size] = '\0';
	}
}