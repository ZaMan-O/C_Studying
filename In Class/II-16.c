#include <stdio.h>
int main(void) {
    int x, y; // 덧셈에 쓸 변수 지정
    scanf_s("%d", &x); // x의 값 입력받기
    scanf_s("%d", &y); // y의 값 입력받기
    printf("%d + %d = %d\n", x, y, x+y); // x+y의 값을 알려주는 출력
}