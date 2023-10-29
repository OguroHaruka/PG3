#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int*);
void WinResult(int* s) {
	printf("“–‚½‚è\n");
}
void LoseResult(int* s) {
	printf("‚Í‚¸‚ê\n");
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}

int main(void) {
	srand(time(nullptr));
	int dice;
	dice = rand() % 6 + 1;
	int number;
	printf("”¼‚©’š‚©?\n");
	scanf_s("%d", &number);
	PFunc p;
	if (dice % 2 == number % 2) {
		p = WinResult;
		setTimeout(p, 3);
	}
	else {
		p = LoseResult;
		setTimeout(p, 3);
	}
	return 0;
}