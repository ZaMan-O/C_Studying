#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int max();
int min();

int main(void) {
	int a = 3, b = 6;
	printf("���� �� : %d\n",max(a,b));
	printf("���� �� : %d",min(a,b));
}

int max(int a, int b) {
	return a > b ? a : b;
}
int min(int a, int b) {
	return a < b ? a : b;
}