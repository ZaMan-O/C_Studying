//�ð��� ���� �־����� �� �ð��� �������� 30�� ���� �ð��� ����Ͻÿ�. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m >= 30) m -= 30;
	else {
		m = 30 + m;
		h = h>=1 ? --h : 23;
	} printf("%d�� %d��", h, m);
}