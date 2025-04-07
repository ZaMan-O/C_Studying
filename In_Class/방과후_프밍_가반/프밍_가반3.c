#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	int Array[3][4][5];
	int number = 1;
	int x, y, z;

	for(int i=0;i<3;i++) {
		for (int ii = 0;ii < 4;ii++) {
			for (int iii = 0;iii < 5;iii++) Array[i][ii][iii] = number++;
		}
	}

	printf("면, 행, 열의 값을 입력해주세요 : "), scanf("%d %d %d", &x, &y, &z);
	x = x < 0 ? 2 - (abs(x) % 3) : x % 3;
	y = y < 0 ? 3 - (abs(y) % 4) : y % 4;
	x = z < 0 ? 4 - (abs(z) % 5) : z % 5;
	printf("끝 : %d", Array[x][y][z]);
}
