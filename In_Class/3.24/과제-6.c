//삼항연산자를 사용해서 a, b중 큰 값을 출력하는 프로그램을 작성해보자.
//단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.

#include <stdio.h>

int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a>b ? a : b);
}