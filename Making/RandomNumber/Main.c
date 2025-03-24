#include "NumberArrays.h"

int Remain_Numbers[99] = { 0, };

int main(void) {
	int num;
	printf("몇번까지 뽑을건지 정해주세요 (1~99)\n:: "), scanf_s("%d", &num);

	if (num > 99) {
		SetColor(12);
		printf("\n[Error] 숫자는 무조건 99 이하로 적으셔야합니다.\n");
		SetColor(7);
		return 0;
	}
	RemainAmount = num; // 몇번까지 뽑을건지 설정 ( 1~99 )
	RandomNumber(Remain_Numbers);
}