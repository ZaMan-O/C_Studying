//����Ʈ �����ڸ� ����ؼ� a�� ���� n�� ���� ����غ���.
//�Է¿��� 1) a = 5, n = 8
//�Է¿��� 2) a = 64, n = 1 / 4

#include <stdio.h>

int main(void) {
	int num1, num2, select;
	printf("a = "), scanf_s("%d", &num1);
	printf("n = "), scanf_s("%d", &num2);

	printf("\n2�� n������ ���ϰ� �����ø� 1\n2�� n�������� 1�� ���ϰ� ������ 2�� �Է����ּ���\nL  ");
	scanf_s("%d", &select);

	select == 1 ? printf("��� : %d", num1 << num2) : printf("��� : %d", num1 >> num2);
}