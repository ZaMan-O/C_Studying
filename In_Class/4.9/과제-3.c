#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input, sum=0;
	do {
		printf("1. ¥���\n2. «��\n3. ��ä��\n4. ������\n5. ����\n");
		printf("���� �Է����ּ��� : "), scanf("%d", &input);
	} while (input != 5);
}