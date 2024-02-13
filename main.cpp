#include <stdio.h>
#include "Compare.h"

int main(void) {
	Compare<int,int> a(10, 20);
	Compare<float,float> b(10.0f, 20.0f);
	Compare<double,double> c(30.0, 20.0);
	Compare<int, float>d(30, 20.0f);
	Compare<int, double>e(10, 20.0);
	Compare<float, double>f(10.0f, 20.0);

	printf("%f\n", a.Min());
	printf("%f\n", b.Min());
	printf("%lf\n", c.Min());
	printf("%d\n", d.Min());
	printf("%d\n", e.Min());
	printf("%f\n", f.Min());
	return 0;
}