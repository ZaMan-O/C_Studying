#include <stdio.h>

int main(void) {
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a); // ������ ���� a ���
	printf("%5d\n", a); // ������ ���� a�� 5ĭ �ڿ��� ���

	printf("%f\n", b); // �Ǽ��� ���� b ���
	printf("%9f\n", b); // �Ǽ��� ���� b�� 9ĭ �ڿ��� ���
	printf("%9.2f\n", b); // �Ǽ��� ���� b�� 9ĭ �ڿ��� �Ҽ��� 2�ڸ������� ���
}