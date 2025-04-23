#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[4][4];
	for (int i = 0;i < 4;i++)
		for (int ii = 0;ii < 4;ii++) scanf("%d", &arr[i][ii]);

	for (int i = 0;i < 4;i++) {
		for (int ii = 3;ii >= 0;ii--) printf("%-2d ", arr[i][ii]);
		printf("\n");
	}
}