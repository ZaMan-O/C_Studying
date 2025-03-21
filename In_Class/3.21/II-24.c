#include <stdio.h>
// 예제 II-24
int main(void) {
	int a = 3, b = 1; // 변수 선언하고 값 초기화
	int x, y; // 변수 선언
	x = !(a > b); // 조건의 결과를 반전한 값을 대입
	y = (a == b) && (a < b) == (a > b || a == b); // 괄호 안의 결과를 ==를 먼저 실행하고 그다음 && 실행
	printf("x = %d\n", x); // x의 값 출력
	printf("y = %d\n", y); // y의 값 출력
	return 0;
}