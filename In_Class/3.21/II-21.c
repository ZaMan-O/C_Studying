#include <stdio.h>
// 예제 II-21
int main(void) {
	int a = 2, b = 3, c = 3, d = 4; // 변수 선언하고 값 초기화
	a += d; printf("%d\n", a); // a 값에 b 더하고 출력
	b *= d; printf("%d\n", b); // b 값에 d를 곱하고 출력
	c %= d; printf("%d\n", c); // c 값에 d로 나눈 나머지를 출력
	return 0;
}