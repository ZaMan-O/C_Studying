//두 정수 a, b를 비교하여 a가 b보다 크면 >, 작으면 < , 같으면 == 를 출력하는 프로그램을 작성한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a,b;
	scanf("%d %d", &a,&b);
	if (a > b) printf(">");
	else if (a < b) printf("<");
	else printf("==");
}