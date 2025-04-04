#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    for (int i = 1;i <= 5;i++) {
        for (int ii = 1;ii <= i;ii++) printf("%d ", ii);
        printf("\n");
    }
}