////문제1
//두개의 정수를 입력 받아 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지를  출력하는 프로그램을 작성해보자.
//입력예시1) 64, 9
//입력예시2) 123, -3
//입력예시3) - 241, -456

#include <stdio.h>

int main(void) {
	int num1, num2;
	scanf_s("%d, %d", &num1, &num2);
	printf("덧셈 : %d\n",num1+num2);
	printf("뺄셈 : %d\n",num1-num2);
	printf("곱셈 : %d\n",num1*num2);
	printf("나눗셈 : %d\n",num1/num2);
	printf("나머지 : %d\n",num1%num2);
}