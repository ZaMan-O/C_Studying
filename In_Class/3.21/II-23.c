#include <stdio.h>
// ���� II-23
int main(void) {
	int a = 1, b = 2, max; // ���� �����ϰ� �� �ʱ�ȭ
	max = (a > b) ? a : b; // a�� b	���� ũ�� max�� a ���� �ƴϸ� b ����
	printf("%d\n", max); // max�� �� ���
	return 0;
}