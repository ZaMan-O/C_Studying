#include <stdio.h>
int main(void) {
	// while��
	int i = 5; // N!���� N�� ����
	int sum = i;
	while (i > 1) {
		i--;
		sum *= i;
	}
	printf("%d\n", sum);
	// for��
	sum = i;
	for (i = 5;i > 1;i--)
		sum *= i - 1;
	printf("%d", sum);
}