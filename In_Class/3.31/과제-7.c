//�ڿ����� �Է¹޾� �������� �ƴ��� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
//< ������ ����>
//400�� ����̸� �����̴�.
//4�� ����̸�, 100�� ����� �ƴϸ� �����̴�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int year;
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0))) printf("�����Դϴ�");
	else printf("������ �ƴմϴ�");
}