#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, sum = 0;
	for (a = 1;a <= 5;a++) sum += a; // a�� 1�� �����ϰ� a�� 5�� �ɶ����� sum ���� a�� ���ϰ� a�� ���� ������Ű��
	printf("%5d", sum);
	return 0;
}