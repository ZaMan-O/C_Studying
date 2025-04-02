#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	for (int i = 2;i <= 20;i++) if (i % 2 == 0) printf("%d ", i);
	return 0;
}