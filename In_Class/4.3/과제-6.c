#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char in;
	do {
		printf("�ݺ����Դϴ�.");
		scanf("%c", &in);
		getchar(); // ���ۿ� �����ִ� ���� ó����
	} while (in != 'n');
	return 0;
}
