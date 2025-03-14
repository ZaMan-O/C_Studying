#include <stdio.h>

int main(void) {
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a); // 정수형 변수 a 출력
	printf("%5d\n", a); // 정수형 변수 a를 5칸 뒤에서 출력

	printf("%f\n", b); // 실수형 변수 b 출력
	printf("%9f\n", b); // 실수형 변수 b를 9칸 뒤에서 출력
	printf("%9.2f\n", b); // 실수형 변수 b를 9칸 뒤에서 소수점 2자리까지만 출력
}