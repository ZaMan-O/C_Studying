#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int age; // �Է¹��� ���� ���� ����
	printf("����� ���̴� ?\n");
	scanf("%d", &age); // ���� �Է¹ޱ�
	if (age >= 20) // ���̰� 20�� �̻��̸� �Ʒ� ���� ����
		printf("���� �����մϴ�.\n");
	else // �ƴϸ� �Ʒ� ���� ����
		printf("������ �� �����ϴ�.\n");
	return 0;
}