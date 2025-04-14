#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int change(int* a, int* b);
int main(void) {
	int a = 6, b = 3;
	change(&a, &b);
	printf("%d %d", a, b);
}
int change(int* a, int* b) {
	int temp;
	temp = *a, * a = *b, * b = temp;
	printf("%d %d\n", *a, *b);
}