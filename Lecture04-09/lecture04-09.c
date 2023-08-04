#include <stdio.h>

int main()
{
	float n1 = 3.14;//4
	double n2 = 1.234;//8
	int n3 = 1024;//4

	printf("%f %f %d\n\n", n1, n2, n3);
	
	printf("%d %d %d\n", n1, n2, n3); //4, 4, 4
	printf("%lld %lld %d\n", n1, n2, n3);//8 8 4
	printf("%f %d %d\n", n1, n2, n3); //8 4 4
	printf("%f %lld %d\n", n1, n2, n3); // 8 8 4

	return 0;
}     
