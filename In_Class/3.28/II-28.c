#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score; // ������ ���� score ����
	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &score); // score ���� �Է¹ޱ�
	if (score >= 70) // score ������ ���� 70 �̻��̸�
		printf("�հ��Դϴ�.\n"); // �� ó�� ���� ����
	return 0;
}