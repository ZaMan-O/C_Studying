#include <stdio.h>
// 예제 II-23
int main(void) {
	int a = 1, b = 2, max; // 변수 선언하고 값 초기화
	max = (a > b) ? a : b; // a가 b	보다 크면 max에 a 대입 아니면 b 대입
	printf("%d\n", max); // max의 값 출력
	return 0;
}