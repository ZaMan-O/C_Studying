#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 5; j++) {
            printf("(%d, %d)", i,j);
        }
        printf("\n");
    }
}