#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int age; // ������ ���� age ����
	printf("����� ���̴�?(1.15�� �̻�, 2.15�� �̸�) : ");
	scanf("%d", &age); // ���� 15�� �̻� �̸� ����
	if (age == 1) { // 1�̸� �Ʒ� ó������ ����
		printf("���� �����մϴ�.\n");
	}
	if (age == 2) { // 2�̸� �Ʒ� ó������ ����
		printf("������ �� �����ϴ�.\n");
	}
	return 0;
}