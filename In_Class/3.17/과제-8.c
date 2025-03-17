// 영문자 1개를 입력받아 아스키 코드표의 10진수 값으로 출력해보자.

#include <stdio.h>

int main(void)
{
	char chr1;
	chr1 = getchar();
	printf("%d", chr1);
}