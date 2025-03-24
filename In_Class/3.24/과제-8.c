//시간과 분을 입력 받고 이것을 초 단위로 변환하여 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void) {
	int h, m, s=0;
	printf("시간 : "), scanf_s("%d", &h);
	printf("분 : "), scanf_s("%d", &m);
	s += h * 3600;
	s += m * 60;
	printf("변환된 초 : %d초", s);
}