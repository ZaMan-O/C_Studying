#include <stdio.h>

enum Thing_List {
	Red = 15,
	Yellow = 20
};

int main(void) {
	enum Thing_List color;
	color = Red;
	printf("%d\n", Red);
	printf("%d\n", Yellow);
	printf("%d\n", color);
}