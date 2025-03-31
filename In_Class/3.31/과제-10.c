//세 수를 오름차순으로 정렬하려고 한다. (낮은 숫자->높은 숫자)
//예) 5 8 2   ====> 2 5 8    로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b, c;
	int temp;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 0;i < 3;i++) {
		if (a < b) temp = b, b = a, a = temp;
		else if (b < c) temp = c, c = b, b = temp;
	} printf("%d %d %d", a, b, c);
}