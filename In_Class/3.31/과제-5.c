//����� �����԰� �������� ������ �ϰ� �Ǿ���.
//���� 30m~40m�� 60m~70m �� ������ ���Ⱑ �̱�.
//�� ���� ������ �������� ü���������� �̱�.
//���Ⱑ ���� ���� ��ġ�� �Է����� �־����� ���Ⱑ �̱�� �������� "win"�� ����ϰ�, �� �ܿ��� "lose"�� ����Ͻÿ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int pos;
	scanf("%d", &pos);
	if (pos >= 30 && pos <= 40)
		printf("win");
	else if (pos >= 60 && pos <= 70)
		printf("win");
	else
		printf("lose");
}