#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int m, n = 8;
	printf("----------\n"); // 구구단 구분 선
	while (n <= 9) { // n이 9 이하이면 계속 반복
		m = 1;
		while (m <= 9) { // m이 9 이하이면 계속 반복
			printf("%dX%d=%2d\n", n, m, n * m); // 구구단 출력
			m++;
		}
		printf("----------\n"); // 구구단 구분 선
		n++;
	}
	return 0;
}