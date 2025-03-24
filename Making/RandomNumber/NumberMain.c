#include "NumberArrays.h"

void RandomNumber() {
	srand((int)time(NULL)); // 랜덤 시드 설정
	for (int i = 0;i < 99;i++) {
		Remain_Numbers[i] = i + 1;
	} // 기초 배열 설정

	while (RemainAmount > 0) {
		SetColor(6);
		printf("\n                                남은 숫자 : %d개\n\n",RemainAmount);

		SetColor(14);
		printf("                                Enter를 눌러 번호 추첨\n\n");
		getchar();

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		SetColor(11);
		ArrayPrint(ReturnNum());
	}
	SetColor(12);
	printf("\n                                모든 숫자가 출력되었습니다.\n                                Enter를 눌러 프로그램을 끝내주세요\n\n\n\n");
	getchar();
}