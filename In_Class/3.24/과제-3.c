//영문자 1개를 입력받아 그 다음 문자를 출력해보자. 

#include <stdio.h>

int main(void) {
	char chr;
	scanf_s("%c", &chr), printf("%c", chr + 1);
}