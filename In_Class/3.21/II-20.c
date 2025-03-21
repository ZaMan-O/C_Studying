#include <stdio.h>
// 예제 II-20
int main()
{
    int a, b, c = 0; // 변수 선언
    a = ++c; // c에 1을 더한 값을 a에 대입
    printf("%d\n", c); // c의 값 출력
    b = c++; // b에 c를 대입하고 c의 값에 1 추가
    printf("%d\n", c);
    printf("%d %d %d", a, b, ++c); // a,b의 값과 c에 1을 더한 값 출력
    return 0;
}