#include <stdio.h>

int total = 0;

int Recusive(int time,int num,int n) {
	
	if (time <= 0) {
		printf("‡Œv\n");
		printf("%d %d\n", total,n*1072);
		return (0);
	}
	total += num;
	printf("%d ", num);
	printf("%d\n", (n+1) * 1072);
	return (time * Recusive(time - 1,num*2-50,n+1));
}

int main(void) {
	Recusive(8, 100, 0);
}