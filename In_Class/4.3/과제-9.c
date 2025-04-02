#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num, sum = 0;
	do {
		printf("정수를 입력하세요 : "), scanf("%d", &num);
		if (num > 0) sum += num;
	} while (num > 0);
	printf("합계 : %d",sum);
}