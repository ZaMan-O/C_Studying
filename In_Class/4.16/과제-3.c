#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a[5] = {1,2,3,4,5};
	int b[5] = {1,4,3,2,5};
	for (int i = 0;i < 5;i++) {
		if (a[i] != b[i]) printf("a[%d]�� b[%d]�� ���� �ٸ��ϴ�.\n", i, i);
	}
}