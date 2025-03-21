#include <stdio.h>
// 예제 II-22
int main(void) {
	int a = 1, b = 2, c = 3; // 변수 선언하고 값 초가화
	if (a < b) printf("b가 크다\n"); // a가 b보다 작으면 출력
	if (b == c) printf("b와 c는 같다\n"); // b와 c가 같으면 출력
	if (b != c) printf("b와 c는 다르다\n"); // b와 c가 다르면 출력
	return 0;
}