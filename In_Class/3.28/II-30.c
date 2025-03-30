#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int age; // 입력받을 나이 변수 선언
	printf("당신의 나이는 ?\n");
	scanf("%d", &age); // 나이 입력받기
	if (age >= 20) // 나이가 20세 이상이면 아래 문장 실행
		printf("입장 가능합니다.\n");
	else // 아니면 아래 문장 실행
		printf("입장할 수 없습니다.\n");
	return 0;
}