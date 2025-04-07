#include <stdio.h>
int main(void)
{
	char munja;
	scanf_s("%c", &munja);
	if (munja >= 48 && munja <= 57)
		printf("숫자입니다");
	else if (munja >= 65 && munja <= 90)
		printf("대문자입니다");
	else if (munja >= 97 && munja <= 122)
		printf("소문자입니다");
	else printf("기타 문자입니다");
}