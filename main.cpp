#include <stdio.h>
#include "Compare.h"

int main(void) {
	Compare<int> a(10, 20);
	Compare<float> b(10.0f, 20.0f);
	Compare<double> c(30.0, 20.0);

	printf("%d\n", a.Min());
	printf("%f\n", b.Min());
	printf("%lf\n", c.Min());
	return 0;
}