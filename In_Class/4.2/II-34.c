#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int i, j;
	i = 2;
	for (j = 1;j <= 9;j++) // j�� 1�� �����ϰ� j�� 9�� �ɶ����� j�� ���� ������Ű��
		printf("%dX%d=%d\n", i, j, i * j); // ������ ���
	return 0;
}