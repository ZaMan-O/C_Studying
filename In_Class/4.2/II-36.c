#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 1;
	while (i > 0) { // i�� ���� 0���� ũ�� ���������� �ݺ�
		printf("����� ������ �Է��Ͻÿ�.\n");
		scanf("%d", &i);
	}
	printf("�߸� �Է��߽��ϴ�.");
	return 0;
}