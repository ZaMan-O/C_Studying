//점수를 입력받아(0~100점) 등급 판별해서 출력하기
//90~100 A, 70~89 B, 40~69 C, 0~39 D
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	scanf("%d", &score);
	if (score >= 90) printf("A 등급입니다");
	else if (score >= 70) printf("B 등급입니다");
	else if (score >= 40) printf("C 등급입니다");
	else printf("D 등급입니다");
}