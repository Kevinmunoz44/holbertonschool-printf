#include "main.h"

/**
 * print_numberDI - its used to print integer and decimal
 * @args: parameter
 *
 *
 * Return: 0
 */

int print_numberDI(va_list args)
{
int n, length, div;
unsigned int num;
n = va_arg(args, int);
div = 1;
length = 0;
if (n < 0)
{
length += _putcharf('-');
num = n * -1;
}
else
{
num = n;
}
for (; num / div > 9;)
{
div *= 10;
}
for (; div != 0;)
{
length += _putcharf('0' + num / div);
num %= div;
div /= 10;
}
return (length);
}
/**
 * print_d_i - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_d_i(va_list list)
{
int nLength;
nLength = print_numberDI(list);
return (nLength);
}
