#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int m, n = 8;
	printf("----------\n"); // ������ ���� ��
	while (n <= 9) { // n�� 9 �����̸� ��� �ݺ�
		m = 1;
		while (m <= 9) { // m�� 9 �����̸� ��� �ݺ�
			printf("%dX%d=%2d\n", n, m, n * m); // ������ ���
			m++;
		}
		printf("----------\n"); // ������ ���� ��
		n++;
	}
	return 0;
}