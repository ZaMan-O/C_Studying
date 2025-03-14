#include <stdio.h>
int main(void) {
    char ch[20]; // 문자열을 넣을 ch 변수 선언
    printf("당신의 이름을 영문으로 써주세요\n:: "); // 안내 메세지 출력
    gets(ch); // ch 변수에 넣을 문자열 입력받기
    printf("당신의 이름 : %s\n", ch); // 입력받은 ch의 값 출력
    return 0;
}