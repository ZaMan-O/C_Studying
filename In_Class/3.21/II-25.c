#include <stdio.h>
// ���� II-25
int main(void) {
	int a = 7, b = 2, c = 5, x, y, z; // ���� ������ �����ϰ� ��� �� �ʱ�ȭ
	x = b & c; // b�� c�� ���� ���� ��� x�� ����
	y = a ^ b; // a�� b�� ��Ÿ�� ���� ���� ��� y�� ����
	z = a | c; // a�� c�� ���� ���� ��� z�� ����
	printf("x = %d", x); // x�� �� ���
	printf("y = %d", y); // y�� �� ���
	printf("z = %d", z); // z�� �� ���
	return 0;
}