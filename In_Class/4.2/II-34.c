#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int i, j;
	i = 2;
	for (j = 1;j <= 9;j++) // j를 1로 설정하고 j가 9가 될때까지 j의 값을 증가시키기
		printf("%dX%d=%d\n", i, j, i * j); // 구구단 출력
	return 0;
}