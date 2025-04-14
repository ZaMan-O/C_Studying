#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factoreal(int n);
int main(void) {
	int n = 5;
	printf("°á°ú : %d", factoreal(n));
}

int factoreal(int n) {
	int temp = n;
	while (n > 1) temp *= --n;
	return temp;
}