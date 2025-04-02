#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	do {
		printf("정수를 입력하세요 (1~100) : "),scanf("%d", &num);
		if (num >= 1 && num <= 100) printf("입력한 값 : %d\n", num);
	} while (num >= 1 && num <= 100);
	printf("프로그램을 종료합니다");
}