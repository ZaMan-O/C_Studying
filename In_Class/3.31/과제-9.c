//�����̴� �԰� ������ �������� ������ ���� ��ٰ� 2������ ��� ������� �ߴ�.
//�׸��� �� �޴��� Į�θ� ���� 500���� ũ�� ������ ȭ�� ����, 500���ϸ� ȭ�� ���� �ʴ´�.
//�����̰� ������ �� �ִ� �޴��� ������ ����.
//ġ����� : 400 Į�θ�
//��ä���� : 340 Į�θ�
//���� : 170 Į�θ�
//������� : 100 Į�θ�
//������ : 70 Į�θ�
//�� �޴��� �� 2���� �޴��� �������� �� Į�θ� ���� ����ϰ�, �� Į�θ� ���� 500���� ũ�� "angry", 500���ϸ� "no angry"�� ����Ͻÿ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int select1,select2;
	int total_kcal=0;
	printf("�԰� ���� �޴��� 2�� ����ּ���\n"), printf("1 : ġ����� : 400Į�θ�\n2 : ��ä���� : 340Į�θ�\n3 : ���� : 170Į�θ�\n4 : ������� : 100Į�θ�\n5 : ������ : 70Į�θ�\n");
	scanf("%d %d", &select1,&select2);
	switch (select1)
	{
	case 1:
		total_kcal += 400;
		break;
	case 2:
		total_kcal += 340;
		break;
	case 3:
		total_kcal += 170;
		break;
	case 4:
		total_kcal += 100;
		break;
	case 5:
		total_kcal += 70;
		break;
	}
	switch (select2)
	{
	case 1:
		total_kcal += 400;
		break;
	case 2:
		total_kcal += 340;
		break;
	case 3:
		total_kcal += 170;
		break;
	case 4:
		total_kcal += 100;
		break;
	case 5:
		total_kcal += 70;
		break;
	}
	if (total_kcal > 500) printf("angry(ȭ�����)");
	else printf("not angry(ȭ �ȳ����)");
	printf("\n[ %d Į�θ� ]", total_kcal);
}