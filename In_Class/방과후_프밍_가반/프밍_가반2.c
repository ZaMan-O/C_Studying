#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numbers[8] = { 13,15,2,19,60,46,248,153 };
	int lowest;
	int lowest_index;

	for (int i = 0;i < 8;i++) {
		lowest = INT_MAX;
		lowest_index = 0;
		for (int ii = i;ii < 8;ii++) {
			if (lowest > numbers[ii]) lowest = numbers[ii], lowest_index = ii;
		}
		numbers[lowest_index] = numbers[i];
		numbers[i] = lowest;
	}
	
	for (int i = 0;i < 8;i++) printf("%d\n", numbers[i]);
}