//������ �Է¹޾�(0~100��) ��� �Ǻ��ؼ� ����ϱ�
//90~100 A, 70~89 B, 40~69 C, 0~39 D
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	scanf("%d", &score);
	if (score >= 90) printf("A ����Դϴ�");
	else if (score >= 70) printf("B ����Դϴ�");
	else if (score >= 40) printf("C ����Դϴ�");
	else printf("D ����Դϴ�");
}