#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int color;
	printf("출입증 색깔은? (1.노란색 2.파란색 3.빨간색)\n");
	scanf("%d", &color);
	if (color == 1) // color 변수가 1이면 아래 실행하고 조건문 끝
		printf("노란색-A방\n");
	else if (color == 2) // 위 조건이 아니라면 color 변수가 2이면 아래 실행하고 조건문 끝
		printf("파란색-B방\n");
	else if (color == 3) // 위 조건이 아니라면 color 변수가 3이면 아래 실행하고 조건문 끝
		printf("빨간색-C방\n");
	return 0;
}