#include <stdio.h>
int main(void)
{
	char munja;
	scanf_s("%c", &munja);
	if (munja >= 48 && munja <= 57)
		printf("�����Դϴ�");
	else if (munja >= 65 && munja <= 90)
		printf("�빮���Դϴ�");
	else if (munja >= 97 && munja <= 122)
		printf("�ҹ����Դϴ�");
	else printf("��Ÿ �����Դϴ�");
}