//자연수를 입력받아 윤년인지 아닌지 판단하는 프로그램을 작성하시오.
//< 윤년의 조건>
//400의 배수이면 윤년이다.
//4의 배수이며, 100의 배수가 아니면 윤년이다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int year;
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0))) printf("윤년입니다");
	else printf("윤년이 아닙니다");
}