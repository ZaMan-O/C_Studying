#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int PrintAtLow(int n, int device_v);
// ���� ����Ἥ �̻��� ������� �ѰŰ����� ����غ� ��� �̰Źۿ��� ������� �Ф�
int main(void) {
	int n = 1389; // �� ���ڸ����� �ƴϿ��� �˴ϴ�
	PrintAtLow(n, 1);
}

int PrintAtLow(int n, int device_v) {
	if (device_v >= n)
		return 0;
	printf("%d", (n % (device_v * 10)) / device_v);
	return PrintAtLow(n, device_v * 10);
}