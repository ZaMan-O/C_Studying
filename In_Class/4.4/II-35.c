#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	for (i = 8;i <= 9;i++) { // i�� 8�� �����ؼ� 9 �����̸� �ݺ�
		for (j = 5;j <= 9;j++) // j�� 5�� �����ؼ� 9 �����̸� �ݺ�
		{
			printf("%dX%d=%d\n", i, j, i * j); // ������ ���
		}
	}
}