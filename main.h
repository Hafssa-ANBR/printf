#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
int _putchar(char c);
int _puts(char *str);
int _putnbr(int n);
int _printf(const char *format, ...);
int _binary(unsigned int num);

#endif
