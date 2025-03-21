#include <stdio.h>
// 예제 II-25
int main(void) {
	int a = 7, b = 2, c = 5, x, y, z; // 변수 여러개 선언하고 몇개는 값 초기화
	x = b & c; // b와 c의 논리곱 연산 결과 x에 대입
	y = a ^ b; // a와 b의 배타적 논리합 연산 결과 y에 대입
	z = a | c; // a와 c의 논리합 연산 결과 z에 대입
	printf("x = %d", x); // x의 값 출력
	printf("y = %d", y); // y의 값 출력
	printf("z = %d", z); // z의 값 출력
	return 0;
}