#include <stdio.h>
int main() {
	int n = 21; // n*n 크기의 정사각형
	for (int i = 0;i < n;i++) { // 세로 단위로 출력하기 위해서 0부터 n까지 반복 (n번 반복)
		// 가로줄을 만들기 위함
		if (i == 0) for (int ii = 0;ii < n;ii++) printf("*"); // 첫번째 줄이면 가로 전체 별 출력
		else if(i == n/2) for (int ii = 0;ii < n;ii++) printf("*");// 중간 줄이면 가로 전체 별 출력
		else if(i == n-1) for (int ii = 0;ii < n;ii++) printf("*");// 마지막 줄이면 가로 전체 별 출력

		else {
			for (int ii = 0;ii < n;ii++) { // 가로의 길이만큼 반복
				// 세로줄을 만들기 위함
				if (ii == 0) printf("*"); // 첫번째 줄이면 별 출력
				else if (ii == n / 2) printf("*");// 중간 줄이면 별 출력
				else if (ii == n - 1) printf("*"); // 마지막 줄이면 별 출력
				// 대각선 줄을 만들기 위함
				else if (ii == i) printf("*"); // 가로의	위치와 세로의 위치가 같으면 별 출력
				else if (ii == n - 1 - i) printf("*"); // 가로의 위치와 세로의 위치가 서로 반대면 별 출력
				else printf(" "); // 아니면 그냥 공백 출력
			}
		}
		printf("\n"); // 줄바꿈
	}
}