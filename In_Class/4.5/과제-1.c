#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
}