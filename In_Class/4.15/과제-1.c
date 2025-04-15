#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int PrintAtLow(int n, int device_v);
// 조금 편법써서 이상한 방법으로 한거같지만 고민해본 결과 이거밖에는 없었어요 ㅠㅠ
int main(void) {
	int n = 1389; // 꼭 네자리수가 아니여도 됩니다
	PrintAtLow(n, 1);
}

int PrintAtLow(int n, int device_v) {
	if (device_v >= n)
		return 0;
	printf("%d", (n % (device_v * 10)) / device_v);
	return PrintAtLow(n, device_v * 10);
}