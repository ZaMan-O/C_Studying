#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, sum = 0;
	for (a = 1;a <= 5;a++) sum += a; // a를 1로 설정하고 a가 5가 될때까지 sum 값에 a를 더하고 a의 값을 증가시키기
	printf("%5d", sum);
	return 0;
}