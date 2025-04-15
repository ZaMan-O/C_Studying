#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factory(int n);

int main(void) {
	printf("%d",factory(5));
}

int factory(int n) {
	if (n <= 1) return 1;
	return n * factory(n - 1);
}