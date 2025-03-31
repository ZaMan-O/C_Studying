//보림이는 먹고 싶은게 많았으나 엄마가 살이 찐다고 2가지만 골라서 먹으라고 했다.
//그리고 두 메뉴의 칼로리 합이 500보다 크면 엄마가 화를 내고, 500이하면 화를 내지 않는다.
//보림이가 선택할 수 있는 메뉴는 다음과 같다.
//치즈버거 : 400 칼로리
//야채버거 : 340 칼로리
//우유 : 170 칼로리
//계란말이 : 100 칼로리
//샐러드 : 70 칼로리
//이 메뉴들 중 2가지 메뉴를 선택했을 때 칼로리 합을 계산하고, 그 칼로리 합이 500보다 크면 "angry", 500이하면 "no angry"를 출력하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int select1,select2;
	int total_kcal=0;
	printf("먹고 싶은 메뉴를 2개 골라주세요\n"), printf("1 : 치즈버거 : 400칼로리\n2 : 야채버거 : 340칼로리\n3 : 우유 : 170칼로리\n4 : 계란말이 : 100칼로리\n5 : 셀러드 : 70칼로리\n");
	scanf("%d %d", &select1,&select2);
	switch (select1)
	{
	case 1:
		total_kcal += 400;
		break;
	case 2:
		total_kcal += 340;
		break;
	case 3:
		total_kcal += 170;
		break;
	case 4:
		total_kcal += 100;
		break;
	case 5:
		total_kcal += 70;
		break;
	}
	switch (select2)
	{
	case 1:
		total_kcal += 400;
		break;
	case 2:
		total_kcal += 340;
		break;
	case 3:
		total_kcal += 170;
		break;
	case 4:
		total_kcal += 100;
		break;
	case 5:
		total_kcal += 70;
		break;
	}
	if (total_kcal > 500) printf("angry(화났어용)");
	else printf("not angry(화 안났어용)");
	printf("\n[ %d 칼로리 ]", total_kcal);
}