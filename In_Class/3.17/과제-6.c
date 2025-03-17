// 주민번호 앞 6자리와 뒷 7자리가 '-'로 구분되어 입력된다.
// (입력값은 가상의 주민번호이다.)
// ex)110011-0000000
// '-'를 제외한 주민번호 13자리를 모두 붙여 출력한다.
// 1100110000000

#include <stdio.h>
#include <string.h>

int main(void)
{
	int num1, num2;

	printf("주민번호 입력 : "), scanf_s("%d-%d", &num1, &num2);
	printf("%d%d", num1, num2);
}