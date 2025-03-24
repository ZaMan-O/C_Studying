//삼항연산자를 중첩해서 a, b, c중 가장 작은 값을 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void) {
	int a, b,c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", a > b ? (c > a ? c : a) : (c > b ? c : b));
}