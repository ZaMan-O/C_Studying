#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int age; // 정수형 변수 age 선언
	printf("당신의 나이는?(1.15세 이상, 2.15세 미만) : ");
	scanf("%d", &age); // 나이 15세 이상 미만 여부
	if (age == 1) { // 1이면 아래 처리문장 실행
		printf("입장 가능합니다.\n");
	}
	if (age == 2) { // 2이면 아래 처리문장 실행
		printf("입장할 수 없습니다.\n");
	}
	return 0;
}