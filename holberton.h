
#ifndef PRINTF_H
#define PRINTF_H
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* functions prototype */
int _printf(const char *format, ...);
int _putchar(char c);

/* functions prototypes conversion */
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);


#endif/* PRINTF_H */
