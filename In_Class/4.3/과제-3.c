#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	do {
		printf("������ �Է����ּ��� (0�Է½� ����) : "), scanf("%d", &num);
	} while (num != 0);
	return 0;
}