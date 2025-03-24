#include "NumberArrays.h"

void PrintSquare(int num) {
	_setmode(_fileno(stdout), _O_U16TEXT);
	if (num == 1) wprintf(L"\x2588\x2588");
	else wprintf(L"\x2591\x2591");

	_setmode(_fileno(stdout), _O_TEXT);
}