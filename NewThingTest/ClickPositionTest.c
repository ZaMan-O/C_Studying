#include <stdio.h>
#include <Windows.h>
#include <fcntl.h>
#include <io.h>
#include <wchar.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>

int main() {
    int holding = 1;
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD ir;
    DWORD dw;
    COORD pos = { 0, 0 };
    int mouse_XY[2] = { 0, 0 };

    SetConsoleMode(hInput, ENABLE_EXTENDED_FLAGS | ENABLE_MOUSE_INPUT);

    while (1) {
        ReadConsoleInput(hInput, &ir, 1, &dw);

        if (ir.EventType == MOUSE_EVENT) {
            if (holding && (ir.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)) {
                holding = 0;
                mouse_XY[0] = ir.Event.MouseEvent.dwMousePosition.X;
                mouse_XY[1] = ir.Event.MouseEvent.dwMousePosition.Y;

                printf("x : %d , y : %d\n\n", mouse_XY[0], mouse_XY[1]);
            }
        }
        Sleep(100)
        if(!(ir.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)) {}
    }
    return 0;
}