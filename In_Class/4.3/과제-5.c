#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, sum = 0;
	int i = 1;
	scanf("%d", &n);
	while (i <= n) { // while�� ���
		sum += i;
		i++;
	} printf("��� : %d\n", sum);
	sum = 0; // ��� �ٽ� �ʱ�ȭ
	i = 1;
	do { // do while�� ���
		sum += i;
		i++;
	} while (i <= n);
	printf("��� : %d\n", sum);
	sum = 0; // ��� �ٽ� �ʱ�ȭ
	for (int i = 1;i <= n;i++) sum += i;
	printf("��� : %d\n", sum);
	return 0;
}
