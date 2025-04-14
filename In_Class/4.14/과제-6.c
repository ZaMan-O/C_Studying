#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double calc_average();
char grade();
int main(void) {
	int korean = 80, math = 70, english = 65;
	printf("µî±Þ : %c", grade(calc_average(korean, math, english)));
}

double calc_average(int a, int b, int c) {
	return (double)(a + b + c) / 3;
}
char grade(double avg) {
	if (avg >= 90) return 'A';
	else if (avg >= 80) return 'B';
	else if (avg >= 70) return 'C';
	else return 'F';
}