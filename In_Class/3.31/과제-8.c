//시간과 분이 주어지면 그 시간을 기준으로 30분 전의 시간을 출력하시오. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m >= 30) m -= 30;
	else {
		m = 30 + m;
		h = h>=1 ? --h : 23;
	} printf("%d시 %d분", h, m);
}