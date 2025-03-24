//시프트 연산자를 사용해서 a의 값을 n배 곱해 출력해보자.
//입력예시 1) a = 5, n = 8
//입력예시 2) a = 64, n = 1 / 4

#include <stdio.h>

int main(void) {
	int num1, num2;
	printf("a = "), scanf_s("%d", &num1);
	printf("n = "), scanf_s("%d", &num2);
	printf("결과 : %d", num1 << num2-1);
}