#ifndef MainHeader_h
#define MainHeader_h

#include <stdio.h>
#include <Windows.h>
#include <fcntl.h>
#include <io.h>
#include <wchar.h>
#include <time.h>
#include <string.h>

int number_array[10][5][3];
int RemainAmount;
extern int Remain_Numbers[99];

void PrintSquare(int num);
void ArrayPrint(int num);
void SetColor(int num);
void RandomNumber();
int ReturnNum();

#endif