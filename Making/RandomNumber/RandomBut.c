#include "NumberArrays.h"

int ReturnNum() {
	int temp;

	int RandomNum = (rand() % RemainAmount);

	temp = Remain_Numbers[RandomNum];
	Remain_Numbers[RandomNum] = Remain_Numbers[RemainAmount - 1];

	RemainAmount--;
	return temp;
}