//����Ʈ �����ڸ� ����ؼ� a�� ���� n�� ���� ����غ���.
//�Է¿��� 1) a = 5, n = 8
//�Է¿��� 2) a = 64, n = 1 / 4

#include <stdio.h>

int main(void) {
	int num1, num2;
	printf("a = "), scanf_s("%d", &num1);
	printf("n = "), scanf_s("%d", &num2);
	printf("��� : %d", num1 << num2-1);
}