#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct personal_owner {
	char rrn1[7];
	char rrn2[8];
};

struct company_owner {
	char crn1[4];
	char crn2[3];
	char crn3[6];
};
union data {
	struct personal_owner po;
	struct company_owner co;
};
struct car_data {
	char model[15];
	int status;
	union data ownerInfo;
};

void print_car(struct car_data car) {
	printf("------------------------------\n");
	printf("Car model : %s\n", car.model);

	if (car.status == 0) {
		printf("Personal owner : %s -%s", car.ownerInfo.po.rrn1, car.ownerInfo.po.rrn2);
	}
	else {
		printf("Companry owner : %s-%s-%s", car.ownerInfo.co.crn1, car.ownerInfo.co.crn2, car.ownerInfo.co.crn3);
	}
	printf("------------------------------\n");
}
int main()
{
	struct car_data my_car = { .model = "Avate", .status = 0, .ownerInfo.po = {"123456","1001001"} };
	struct car_data company_car = { .model = "Sonata", .status = 1, .ownerInfo.co = {"111","22","3333"}};

	print_car(my_car);
	print_car(company_car);

	//union my_union {
	//	int i;
	//	double d;
	//	char c;
	//};

	//union my_union uni;
	//printf("%zd\n", sizeof(union my_union));
	//printf("%lld\n", (long long)&uni);
	//printf("%lld %lld %lld\n", (long long)&uni.i, (long long)&uni.d, (long long)&uni.c);

	//union my_union save[10];

	//printf("%zd\n", sizeof(save));

	//union my_union uni1;
	//uni1.c = 'A';
	//printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);

	//uni1.i = 0;
	//uni1.c = 'A';
	//printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);

	//uni1.d = 1.2;
	//printf("%d %f %d %c\n", uni1.i, uni1.d, (int)uni1.c, uni1.c);





	return 0;
}     
