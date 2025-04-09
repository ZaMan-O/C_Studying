#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double sum = 0;
	int score,i = 0;
	while (i < 5) {
		scanf("%d", &score);
		sum += score;
		i++;
	} printf("ЦђБе : %.2lf\n\n", sum / 5);
	sum = 0;
	for (i = 0;i < 5;i++) {
		scanf("%d", &score);
		sum += score;
	} printf("ЦђБе : %.2lf\n\n", sum / 5);
}