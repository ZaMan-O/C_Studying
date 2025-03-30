#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int cap;
	printf("다음 국가의 수도는?(1.미국 2.일본 3.중국)\n");
	scanf("%d", &cap);
	switch (cap)
	{
	case 1: printf("미국 : 워싱턴\n"); break; // switch 괄호 안의 변수가 1이면 실행하고 끝
	case 2: printf("일본 : 도쿄\n"); break;// switch 괄호 안의 변수가 2이면 실행하고 끝
	case 3: printf("중국 : 베이징\n"); break;// switch 괄호 안의 변수가 3이면 실행하고 끝
	default: printf("입력 오류입니다\n"); // switch 괄호 안의 변수가 위에서 아무것도 만족하지않으면 실행
	}
	return 0;
}