#include <stdio.h>
// 예제 II-27
int main(void) {
	int a = 3, x; // 변수 선언하고 값 초기화
	float y, z; // 실수형 변수 선언
	x = a / 2; // 정수 a(3)을 2로 나눈 값 정수 x에 대입
	y = a / 2; // 정수 a(3)을 2로 나눈 값 실수 y에 대입
	z = (float)a / 2; // 실수로 변환한 a(3)을 2로 나눈 값 실수 z에 대입
	printf("x = %2d\ny = %d\nz = %f\n", x, y, z); // x,y,z 값 출력
	return 0;
}