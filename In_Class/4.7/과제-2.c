#include <stdio.h>
int main(void) {
    int number;
    scanf_s("%d", &number);
    switch (number) {
    case 0:
        printf("없음\n");
        break;
    case 1:
        printf("하나\n");
        break;
    case 2:
        printf("둘\n");
        break;
    default:
        printf("많음\n");
    }
}