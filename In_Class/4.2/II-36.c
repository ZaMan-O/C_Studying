#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 1;
	while (i > 0) { // i의 값이 0보다 크지 않을때까지 반복
		printf("양수의 정수를 입력하시오.\n");
		scanf("%d", &i);
	}
	printf("잘못 입력했습니다.");
	return 0;
}