//슬기는 선생님과 공던지기 게임을 하게 되었다.
//공이 30m~40m나 60m~70m 에 들어오면 슬기가 이김.
//그 외의 구간에 떨어지면 체육선생님이 이김.
//슬기가 던진 공의 위치가 입력으로 주어지면 슬기가 이기는 구간에는 "win"을 출력하고, 그 외에는 "lose"를 출력하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int pos;
	scanf("%d", &pos);
	if (pos >= 30 && pos <= 40)
		printf("win");
	else if (pos >= 60 && pos <= 70)
		printf("win");
	else
		printf("lose");
}