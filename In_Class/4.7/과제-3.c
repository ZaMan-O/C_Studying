#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    char munja;
    char* season;
    char* message;
    printf("�� : A �Ǵ� a\n");
    printf("���� : S �Ǵ� s\n");
    printf("���� : D �Ǵ� d\n");
    printf("�ܿ� : F �Ǵ� f\n");
    printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է� : ");
    scanf("%c", &munja);
    switch (munja) {
        case 65:
        case 97:
            season = "��";
            message = "������ �һ��ϴ� ����";
            break;
        case 83:
        case 115:
            season = "����";
            message = "�ÿ��� ����� ���� ����";
            break;
        case 68:
        case 100:
            season = "����";
            message = "��İ� ������ ǳ���� ����";
            break;
        case 70:
        case 102:
            season = "�ܿ�";
            message = "���Ͼ� ���� ���� ��Ű�� ����";
            break;
        default:
            season = "����!!";
            message = "���ĺ��� ��� ���� ���� ���� A, S, D, F�� ���˴ϴ�.";
    }
    printf("������ ���� : %s\n", season);
    printf("�޼��� : %s\n", message);
}