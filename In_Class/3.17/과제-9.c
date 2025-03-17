// 10진수를 입력받아 16진수(hexadecimal)로 출력해보자.

#include <stdio.h>

int main(void)
{
	int num;
	printf("입력 : "), scanf_s("%d", &num);
	printf("출력 : %x", num);
}