#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int cap;
	printf("���� ������ ������?(1.�̱� 2.�Ϻ� 3.�߱�)\n");
	scanf("%d", &cap);
	switch (cap)
	{
	case 1: printf("�̱� : ������\n"); break; // switch ��ȣ ���� ������ 1�̸� �����ϰ� ��
	case 2: printf("�Ϻ� : ����\n"); break;// switch ��ȣ ���� ������ 2�̸� �����ϰ� ��
	case 3: printf("�߱� : ����¡\n"); break;// switch ��ȣ ���� ������ 3�̸� �����ϰ� ��
	default: printf("�Է� �����Դϴ�\n"); // switch ��ȣ ���� ������ ������ �ƹ��͵� �������������� ����
	}
	return 0;
}