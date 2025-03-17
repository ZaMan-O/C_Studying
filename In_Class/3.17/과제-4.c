// 2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자. 

#include <stdio.h>
#include <string.h>

int main(void)
{
	char chr1, chr3;
	printf("입력 : ");
	chr1 = getchar();
	getchar();
	chr3 = getchar();
	printf("출력 : %c %c", chr3, chr1);
}