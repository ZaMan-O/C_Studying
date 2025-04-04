#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	for (i = 8;i <= 9;i++) { // i가 8로 시작해서 9 이하이면 반복
		for (j = 5;j <= 9;j++) // j가 5로 시작해서 9 이하이면 반복
		{
			printf("%dX%d=%d\n", i, j, i * j); // 구구단 출력
		}
	}
}