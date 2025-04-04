#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int h,w;
    scanf("%d %d", &h, &w);
    for (int i = 1; i <= h; i++) {
        for (int ii = 1; ii <= w; ii++) {
            printf("*", i, ii);
        }
        printf("\n");
    }
}