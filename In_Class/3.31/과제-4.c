//���� �Է¹ް� switch case���� ����ؼ� ���� ����ϱ�
//12, 1, 2 : �ܿ�
//3, 4, 5 : ��
//6, 7, 8 : ����
//9, 10, 11 : ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int month;
	scanf("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�");
		break;
	case 3:
	case 4:
	case 5:
		printf("��");
		break;
	case 6:
	case 7:
	case 8:
		printf("����");
		break;
	case 9:
	case 10:
	case 11:
		printf("����");
		break;
	}
}