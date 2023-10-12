#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 20

struct names {
	char given[LEN];
	char family[LEN];
};
struct friend{
	struct names full_name;
	char mobile[LEN];
};

int main()
{
	struct friend my_friends[2] = {
		{{"Arian","Grande"}, "1234-5678"},
		{{"Taylor","Swift"}, "5555-6666"}
	};

	struct friend* girl_firend;
	girl_firend = &my_friends[0];

	printf("%zd\n", sizeof(struct friend));
	printf("%lld  %s\n", (long long)girl_firend, girl_firend->full_name.given);

	girl_firend++;
	printf("%lld  %s\n", (long long)girl_firend, girl_firend->full_name.given);



	return 0;
}     
