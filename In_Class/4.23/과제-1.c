#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[3][3];
	int sum = 0;
	for (int i = 0;i < 3;i++) {
		for (int ii = 0;ii < 3;ii++) {
			scanf("%d", &arr[i][ii]);
			sum += arr[i][ii];
		}
	}
	printf("°á°ú : %d", sum);
}