//
// Created by rajab on 25/06/24.
//

#ifndef MY_PRINTF_H
#define MY_PRINTF_H


#include <stddef.h>


char* my_chardup(const char c);

char my_putchar(const char c);

size_t my_strlen(const char* str);

int my_puts(const char* str);

void my_putint(int num);

void my_putdouble(double num);

int my_printf(const char* fmt, ...);

#endif // MY_PRINTF_H


#endif //MY_PRINTF_H
