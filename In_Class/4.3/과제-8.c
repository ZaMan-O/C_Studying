#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	do {
		printf("������ �Է��ϼ��� (1~100) : "),scanf("%d", &num);
		if (num >= 1 && num <= 100) printf("�Է��� �� : %d\n", num);
	} while (num >= 1 && num <= 100);
	printf("���α׷��� �����մϴ�");
}