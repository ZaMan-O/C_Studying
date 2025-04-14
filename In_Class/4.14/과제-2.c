#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gugudan();
int main(void) {
	int n = 5;
	gugudan(n);
}
int gugudan(int n) {
	for (int i = 1;i < 10;i++) printf("%d X %d = %d\n", n, i, n * i);
}