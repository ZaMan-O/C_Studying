#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n = 10;
	do { // �̸� ����
		if (n % 5 == 0) printf("%3d", n); // n�� 5�� ���� �������� 0�̸� n�� �� ���
		n++;
	} while (n < 20); // ���ǿ� ������ do���� ��� �ݺ�
	return 0;
}