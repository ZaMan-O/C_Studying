//�ð��� ���� �Է� �ް� �̰��� �� ������ ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.

#include <stdio.h>

int main(void) {
	int h, m, s=0;
	printf("�ð� : "), scanf_s("%d", &h);
	printf("�� : "), scanf_s("%d", &m);
	s += h * 3600;
	s += m * 60;
	printf("��ȯ�� �� : %d��", s);
}