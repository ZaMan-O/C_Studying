#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num, sum = 0;
	do {
		printf("������ �Է��ϼ��� : "), scanf("%d", &num);
		if (num > 0) sum += num;
	} while (num > 0);
	printf("�հ� : %d",sum);
}