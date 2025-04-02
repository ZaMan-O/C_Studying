#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = num;i > 0;i--) printf("%d ", i);
}
