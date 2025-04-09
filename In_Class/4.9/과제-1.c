#include <stdio.h>
int main(void) {
	// while문
	int i = 5; // N!에서 N의 숫자
	int sum = i;
	while (i > 1) {
		i--;
		sum *= i;
	}
	printf("%d\n", sum);
	// for문
	sum = i;
	for (i = 5;i > 1;i--)
		sum *= i - 1;
	printf("%d", sum);
}