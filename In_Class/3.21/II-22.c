#include <stdio.h>
// ���� II-22
int main(void) {
	int a = 1, b = 2, c = 3; // ���� �����ϰ� �� �ʰ�ȭ
	if (a < b) printf("b�� ũ��\n"); // a�� b���� ������ ���
	if (b == c) printf("b�� c�� ����\n"); // b�� c�� ������ ���
	if (b != c) printf("b�� c�� �ٸ���\n"); // b�� c�� �ٸ��� ���
	return 0;
}