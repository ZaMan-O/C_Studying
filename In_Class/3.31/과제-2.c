//������ ���� a, b, c�� �Է¹ް� ¦��/Ȧ�� �Ǻ��ؼ� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) printf("a�� ¦��\n");
	else printf("a�� Ȧ��\n");
	if (b % 2 == 0) printf("b�� ¦��\n");
	else printf("b�� Ȧ��\n");
	if (c % 2 == 0) printf("c�� ¦��\n");
	else printf("c�� Ȧ��\n");
}