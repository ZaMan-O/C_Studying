#include "NumberArrays.h"

void ArrayPrint(int num) {
	int num_10, num_1;
	num_10 = num / 10;
	num_1 = num % 10;

	for (int i = 0;i < 5;i++) {
		printf("                                ");
		for (int ii = 0;ii < 3;ii++) {
			number_array[num_10][i][ii] ? PrintSquare(1) : printf("  ");
			//Sleep(15);
		}
		printf("  ");
		for (int ii = 0;ii < 3;ii++) {
			number_array[num_1][i][ii] ? PrintSquare(1) : printf("  ");
			//Sleep(15);
		}
		printf("\n");
		
	}
}