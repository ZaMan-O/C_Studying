#include <stdio.h>
// ���� II-21
int main(void) {
	int a = 2, b = 3, c = 3, d = 4; // ���� �����ϰ� �� �ʱ�ȭ
	a += d; printf("%d\n", a); // a ���� b ���ϰ� ���
	b *= d; printf("%d\n", b); // b ���� d�� ���ϰ� ���
	c %= d; printf("%d\n", c); // c ���� d�� ���� �������� ���
	return 0;
}