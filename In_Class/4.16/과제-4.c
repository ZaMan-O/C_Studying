#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a[5];
	int b[5];
	printf("a �迭 �Է�\n");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &a[i]);
	}
	printf("b �迭 �Է�\n");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &b[i]);
	}
	printf(": ��� :\n");
	for (int i = 0;i < 5;i++) {
		printf("%d ", a[i] + b[i]);
	}
}