#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input, sum=0;
	do {
		printf("1. 짜장면\n2. 짬뽕\n3. 잡채밥\n4. 볶음밥\n5. 종료\n");
		printf("값을 입력해주세요 : "), scanf("%d", &input);
	} while (input != 5);
}