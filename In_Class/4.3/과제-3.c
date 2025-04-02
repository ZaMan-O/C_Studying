#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	do {
		printf("정수를 입력해주세요 (0입력시 멈춤) : "), scanf("%d", &num);
	} while (num != 0);
	return 0;
}