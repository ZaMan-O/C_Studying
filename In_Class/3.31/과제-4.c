//월을 입력받고 switch case문을 사용해서 계절 출력하기
//12, 1, 2 : 겨울
//3, 4, 5 : 봄
//6, 7, 8 : 여름
//9, 10, 11 : 가을
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int month;
	scanf("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을");
		break;
	}
}