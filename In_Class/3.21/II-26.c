#include <stdio.h>
// 예제 II-26
int main(void) {
	int s1 = 2; // 변수 선언하고 값 초기화
	int s2 = 8; // 변수 선언하고 값 초기화
	printf("s1 << 1 = %d\n", s1 << 1); // s1의 비트를 왼쪽으로 한칸 이동한 값을 출력
	printf("s2 >> 1 = %d\n", s2 >> 1); // s2의 비트를 오른쪽으로 한칸 이동한 값을 출력
	return 0;
}