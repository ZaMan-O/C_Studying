#include "NumberArrays.h"

void RandomNumber() {
	srand((int)time(NULL)); // ���� �õ� ����
	for (int i = 0;i < 99;i++) {
		Remain_Numbers[i] = i + 1;
	} // ���� �迭 ����

	while (RemainAmount > 0) {
		SetColor(6);
		printf("\n                                ���� ���� : %d��\n\n",RemainAmount);

		SetColor(14);
		printf("                                Enter�� ���� ��ȣ ��÷\n\n");
		getchar();

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		SetColor(11);
		ArrayPrint(ReturnNum());
	}
	SetColor(12);
	printf("\n                                ��� ���ڰ� ��µǾ����ϴ�.\n                                Enter�� ���� ���α׷��� �����ּ���\n\n\n\n");
	getchar();
}