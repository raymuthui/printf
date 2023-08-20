#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
#endif
