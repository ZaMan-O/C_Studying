#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a[5] = { 5,1,7,3,9 };
	int temp;
	for (int i = 0;i < 4;i++) {
		for (int ii = 0;ii < 4;ii++) {
			if (a[ii] > a[ii + 1]) {
				temp = a[ii];
				a[ii] = a[ii + 1];
				a[ii + 1] = temp;
			}
		}
	}
	for (int i = 0;i < 5;i++) {
		printf("%d ", a[i]);
	}
}