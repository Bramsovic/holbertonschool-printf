#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct specificateur
{
char specificateur;
int (*pointeurdefonction)(va_list);
} specificateur_t;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _putchar(char c);
#endif

