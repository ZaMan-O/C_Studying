#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    for (int i = 2;i <= 9;i++) {
        printf("----------\n"); // ������ ���м�
        for (int ii = 1;ii <= 9;ii++) printf("%dX%d=%d\n", i, ii, i * ii);
    }
}