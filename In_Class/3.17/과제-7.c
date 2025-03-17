// 년월일(yyyy.mm.dd)를 입력받아,
// 일월년(dd-mm-yyyy)로 출력해보자.
// (단, 한 자리 일/월은 0을 붙여 두자리로, 년도도 0을 붙여 네자리로 출력한다.) 

#include <stdio.h>
#include <string.h>

int main(void)
{
	int year, month, day;
	scanf_s("%d.%d.%d", &year, &month, &day);
	printf("%02d-%02d-%04d", day, month, year);
}