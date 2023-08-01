#include <stdio.h>
#include <float.h>

int main() {
	float a, b;
	// round-off errors (ex1)
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);

	// round-off errors (ex2)
    a = 0.0f;
	for (int i = 0; i < 100; i++) {
		a = a + 0.01f;
	}
	printf("%f\n", a);

	//overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100;
	printf("%f\n", max);

	//underflow
	float f = 1.401298464e-45F;
	printf("%e\n",f);
	f = f / 100.f; //subnormal
	printf("%e\n", f);

	// /0
	 f = 104.0f;
	printf("%f\n", f);
	f = f / 0.0;
	printf("%f\n", f);

	return 0;
}