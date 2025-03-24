//두 정수 a, b를 입력받아 a와 b가 같으면 1을 같지 않으면 0을 출력하는 프로그램을 작성해보자. 

#include <stdio.h>

int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a == b);
}