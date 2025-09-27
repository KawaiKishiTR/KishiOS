#pragma once
#include "stdint.h"

void putc(char c);
void puts(const char* str);
void puts_f(const char far* s);
void _cdecl printf(const char* fmt, ...);
int* printf_number(int*, int, bool, int);

#define PRINTF_STATE_START 0
#define PRINTF_STATE_LENGTH 1
#define PRINTF_STATE_SHORT 2
#define PRINTF_STATE_LONG 3
#define PRINTF_STATE_SPEC 4

#define PRINTF_LENGHT_START 0
#define PRINTF_LENGHT_SHORT_SHORT 1
#define PRINTF_LENGHT_SHORT 2
#define PRINTF_LENGHT_LONG 3
#define PRINTF_LENGHT_LONG_LONG 4


