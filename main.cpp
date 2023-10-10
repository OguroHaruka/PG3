#include <stdio.h>

template<typename Type>
Type Min(Type a, Type b) {
	if (a > b) {
		return b;
	}
	else if (a < b) {
		return a;
	}
}

template<>
char Min<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return a;
}

int main(void) {
	printf("%d\n", Min<int>(10, 20));
	printf("%f\n", Min<float>(10.0f, 20.0f));
	printf("%f\n", Min<double>(10.0f, 20.0f));
	char a=10, b=20;
	Min<char>(a, b);
}