//시프트 연산자를 사용해서 a의 값을 n배 곱해 출력해보자.
//입력예시 1) a = 5, n = 8
//입력예시 2) a = 64, n = 1 / 4

#include <stdio.h>

int main(void) {
	int num1, num2, select;
	printf("a = "), scanf_s("%d", &num1);
	printf("n = "), scanf_s("%d", &num2);

	printf("\n2의 n제곱을 곱하고 싶으시면 1\n2의 n제곱분의 1로 곱하고 싶으면 2를 입력해주세요\nL  ");
	scanf_s("%d", &select);

	select == 1 ? printf("결과 : %d", num1 << num2) : printf("결과 : %d", num1 >> num2);
}