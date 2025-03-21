#include <stdio.h>
// 예제 II-19
int main()
{
    int x, y, z; // 변수 선언
    x = 2; // x에 2 대입
    y = x; // y에 x의 값 대입
    z = 5 - x; // z에 5에서 x를 뺀 값을 대입
    printf("%d\n%d\n%d\n", x, y, z); // 변수들 출력
    return 0;
}