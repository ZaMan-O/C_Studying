#include <stdio.h>
int main(void) {
    char ch;
    printf("영문자 한개를 입력해주세요 : "); // 안내 메세지 출력
    ch = getchar(); // getchar()를 이용하여 문자 하나 입력받아서 ch에 저장
    printf("입력한 영문자 : %c\n", ch); // ch에 입력된 문자 출력
}