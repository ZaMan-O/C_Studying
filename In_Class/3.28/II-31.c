#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int color;
	printf("������ ������? (1.����� 2.�Ķ��� 3.������)\n");
	scanf("%d", &color);
	if (color == 1) // color ������ 1�̸� �Ʒ� �����ϰ� ���ǹ� ��
		printf("�����-A��\n");
	else if (color == 2) // �� ������ �ƴ϶�� color ������ 2�̸� �Ʒ� �����ϰ� ���ǹ� ��
		printf("�Ķ���-B��\n");
	else if (color == 3) // �� ������ �ƴ϶�� color ������ 3�̸� �Ʒ� �����ϰ� ���ǹ� ��
		printf("������-C��\n");
	return 0;
}