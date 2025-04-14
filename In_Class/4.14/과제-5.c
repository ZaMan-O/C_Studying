#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getpivo();
int main(void) {
	int n = 6;
	printf("°á°ú : %d", getpivo(n));
}
int getpivo(int n) {
	if (n <= 2) return 1;
	int a = 1, b = 1;
	int temp;
	for (int i = 0;i < n - 2;i++) {
		temp = a;
		a += b;
		b = temp;
	}
	return a;
}