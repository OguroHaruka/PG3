#include "Circle.h"

void Circle::Size() {
	z = radius * radius*3.14f;
}

void Circle::Draw() {
	printf("�~�̖ʐ� = %f\n", z);
}