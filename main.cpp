#include <stdio.h>
#include "Tea.h"
#include "Water.h"

int main() {
	Drink* drink[2] = {
		new Tea(),
		new Water()
	};

	drink[0]->Pour();
	drink[1]->Pour();

	return 0;
}