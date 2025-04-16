#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[5];
	printf("국,수,사,과,영 점수 : ");
	scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);
	int result = 0;
	double avg;
	for (int i = 0;i < 5;i++) result += score[i];
	avg = (double)result / 5;
	printf("합 : %d / 평균 : %lf", result, avg);
}