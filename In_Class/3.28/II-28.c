#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score; // 정수형 변수 score 선언
	printf("성적을 입력하시오.\n");
	scanf("%d", &score); // score 변수 입력받기
	if (score >= 70) // score 변수의 값이 70 이상이면
		printf("합격입니다.\n"); // 이 처리 문장 실행
	return 0;
}