#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a[10];
	for (int i = 0;i < 10;i++) {
		scanf("%d", &a[i]);
	}
	int jjak = 0, hol = 0;
	for (int i = 0;i < 10;i++) {
		if (a[i] % 2 == 0) jjak++;
		else hol++;
	}
	printf("¦���� ���� : %d , Ȧ���� ���� : %d", jjak, hol);
}