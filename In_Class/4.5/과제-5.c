#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    for (int i = 2;i <= 9;i++) {
        printf("----------\n"); // 구구단 구분선
        for (int ii = 1;ii <= 9;ii++) printf("%dX%d=%d\n", i, ii, i * ii);
    }
}