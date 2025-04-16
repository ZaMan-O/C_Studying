#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[5] = { 35,105,78,29,53 };
	int max_index = 0, min_index = 0;
	for (int i = 1;i < 5;i++) {
		if (arr[i] > arr[max_index])
			max_index = i;
		if (arr[i] < arr[min_index])
			min_index = i;
	}
	printf("최고 : arr[%d]\n최하 : arr[%d]", max_index, min_index);
}