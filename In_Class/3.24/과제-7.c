//���׿����ڸ� ��ø�ؼ� a, b, c�� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.

#include <stdio.h>

int main(void) {
	int a, b,c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", a > b ? (c > a ? c : a) : (c > b ? c : b));
}