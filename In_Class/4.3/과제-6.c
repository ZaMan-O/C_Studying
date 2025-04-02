#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char in;
	do {
		printf("반복중입니다.");
		scanf("%c", &in);
		getchar(); // 버퍼에 남아있는 엔터 처리용
	} while (in != 'n');
	return 0;
}
