#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score;
	char* grade;
	printf("A학점 : 90점 이상 100점 이하\n");
	printf("B학점 : 80점 이상 90점 미만\n");
	printf("C학점 : 70점 이상 80점 미만\n");
	printf("D학점 : 60점 이상 70점 미만\n");
	printf("F학점 : 0점 이상 60점 미만\n");
	printf("점수 입력 : "), scanf("%d", &score);
	score /= 10;
	switch (score)
	{
	case 10:
	case 9:
		grade = "A학점";
		break;
	case 8:
		grade = "A학점";
		break;
	case 7:
		grade = "A학점";
		break;
	case 6:
		grade = "A학점";
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		grade = "F학점";
		break;
	default:
		printf("입력한 점수는 허용 구간이 아닙니다.\n프로그램을 다시 실행하세요.");
		return 0;
	}
	printf("등급 : %s", grade);
}