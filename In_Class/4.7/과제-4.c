#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	char* grade;
	printf("A���� : 90�� �̻� 100�� ����\n");
	printf("B���� : 80�� �̻� 90�� �̸�\n");
	printf("C���� : 70�� �̻� 80�� �̸�\n");
	printf("D���� : 60�� �̻� 70�� �̸�\n");
	printf("F���� : 0�� �̻� 60�� �̸�\n");
	printf("���� �Է� : "), scanf("%d", &score);
	score /= 10;
	switch (score)
	{
	case 10:
	case 9:
		grade = "A����";
		break;
	case 8:
		grade = "A����";
		break;
	case 7:
		grade = "A����";
		break;
	case 6:
		grade = "A����";
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		grade = "F����";
		break;
	default:
		printf("�Է��� ������ ��� ������ �ƴմϴ�.\n���α׷��� �ٽ� �����ϼ���.");
		return 0;
	}
	printf("��� : %s", grade);
}