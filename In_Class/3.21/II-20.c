#include <stdio.h>
// ���� II-20
int main()
{
    int a, b, c = 0; // ���� ����
    a = ++c; // c�� 1�� ���� ���� a�� ����
    printf("%d\n", c); // c�� �� ���
    b = c++; // b�� c�� �����ϰ� c�� ���� 1 �߰�
    printf("%d\n", c);
    printf("%d %d %d", a, b, ++c); // a,b�� ���� c�� 1�� ���� �� ���
    return 0;
}