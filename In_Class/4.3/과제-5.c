#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, sum = 0;
	int i = 1;
	scanf("%d", &n);
	while (i <= n) { // while문 사용
		sum += i;
		i++;
	} printf("결과 : %d\n", sum);
	sum = 0; // 결과 다시 초기화
	i = 1;
	do { // do while문 사용
		sum += i;
		i++;
	} while (i <= n);
	printf("결과 : %d\n", sum);
	sum = 0; // 결과 다시 초기화
	for (int i = 1;i <= n;i++) sum += i;
	printf("결과 : %d\n", sum);
	return 0;
}
