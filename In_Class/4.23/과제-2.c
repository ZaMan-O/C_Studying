#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[4][4];
	for (int i = 0;i < 4;i++) {
		for (int ii = 0;ii < 4;ii++) scanf("%d", &arr[i][ii]);
	}
	int sum[2] = { 0, };
	for (int i = 0;i < 4;i++) sum[0] += arr[i][i];
	for (int i = 0;i < 4;i++) sum[1] += arr[i][3-i];
	printf("주대각선의 합 : %d\n부대각선의 합 : %d", sum[0], sum[1]);
}