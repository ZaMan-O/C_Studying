// 8진수로 입력된 정수 1개를 10진수로 바꾸어 출력해보자.

#include <stdio.h>

int main(void)
{
	int num8;
	printf("입력 : "), scanf_s("%o", &num8);
	printf("출력 : %d", num8);
}