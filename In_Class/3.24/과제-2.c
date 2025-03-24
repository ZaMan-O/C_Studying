//정수를 입력받아 부호를 바꿔 출력해보자.
//입력예시 1) 5
//입력예시 2) - 4

#include <stdio.h>

int main(void) {
	int num;
	scanf_s("%d", &num);
	printf("부호 바꾼 수 : %d", -(num));
}