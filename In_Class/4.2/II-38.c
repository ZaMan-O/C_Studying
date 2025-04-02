#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n = 10;
	do { // 미리 시작
		if (n % 5 == 0) printf("%3d", n); // n을 5로 나눈 나머지가 0이면 n의 값 출력
		n++;
	} while (n < 20); // 조건에 맞으면 do부터 계속 반복
	return 0;
}