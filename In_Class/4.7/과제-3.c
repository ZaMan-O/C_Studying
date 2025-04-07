#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    char munja;
    char* season;
    char* message;
    printf("봄 : A 또는 a\n");
    printf("여름 : S 또는 s\n");
    printf("가을 : D 또는 d\n");
    printf("겨울 : F 또는 f\n");
    printf("좋아하는 계절에 해당하는 알파벳 입력 : ");
    scanf("%c", &munja);
    switch (munja) {
        case 65:
        case 97:
            season = "봄";
            message = "만물이 소생하는 계절";
            break;
        case 83:
        case 115:
            season = "여름";
            message = "시원한 계곡을 즐기는 계절";
            break;
        case 68:
        case 100:
            season = "가을";
            message = "곡식과 과일이 풍성한 계절";
            break;
        case 70:
        case 102:
            season = "겨울";
            message = "새하얀 눈이 덮인 스키의 계절";
            break;
        default:
            season = "오류!!";
            message = "알파벳은 대소 문자 구별 없이 A, S, D, F만 허용됩니다.";
    }
    printf("선택한 계절 : %s\n", season);
    printf("메세지 : %s\n", message);
}