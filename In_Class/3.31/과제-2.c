//세개의 정수 a, b, c를 입력받고 짝수/홀수 판별해서 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) printf("a는 짝수\n");
	else printf("a는 홀수\n");
	if (b % 2 == 0) printf("b는 짝수\n");
	else printf("b는 홀수\n");
	if (c % 2 == 0) printf("c는 짝수\n");
	else printf("c는 홀수\n");
}