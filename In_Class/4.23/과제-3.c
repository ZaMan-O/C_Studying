#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[4][5];
	for (int i = 0;i < 4;i++)
		for (int ii = 0;ii < 5;ii++) scanf("%d", &arr[i][ii]);

	int sum = 0;
	for (int i = 0;i < 4;i++) {
		for (int ii = 0;ii < 5;ii++) sum += arr[i][ii];
		printf("%d행의 합 : %d\n", i + 1, sum);
		sum = 0;
	}
	
	for (int i = 0;i < 5;i++) {
		for (int ii = 0;ii < 4;ii++) sum += arr[ii][i];
		printf("%d열의 합 : %d\n", i + 1, sum);
		sum = 0;
	}
}