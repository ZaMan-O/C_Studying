#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, i = 0;
	scanf("%d", &n);
	printf("while 사용\n");
	while (i < 9) printf("%dX%d=%d\n", n, ++i, n * i);

	printf("for 사용\n");
	for(i=1;i<=9;i++) printf("%dX%d=%d\n", n, i, n * i);

	i = 0;
	printf("do while 사용\n");
	do {
		printf("%dX%d=%d\n", n, ++i, n * i);
	} while (i < 9);
}