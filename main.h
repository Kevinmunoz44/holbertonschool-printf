#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct changing - program
 * @rm: parameter
 * @f: parameter
 *
 * Return: 0
 */

typedef struct changing
{
char *rm;
int (*f)(va_list);
} changing_t;

int _putcharf(char c);
int parser(const char *format, changing_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int print_c(va_list);
int print_s(va_list);
int print_percent(va_list);
int print_d_i(va_list);

#endif
