#include "main.h"

/**
 * _putcharf - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 iss returned, and errno is set appropriately.
 */
int _putcharf(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_c - writes strings
 * @list: parameter
 *
 * Return: 0
 *
 */

int print_c(va_list list)
{
_putcharf(va_arg(list, int));
return (1);
}

/**
 * print_s - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_s(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putcharf(str[i]);
	return (i);
}


/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putcharf('%');
	return (1);
}
/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, changing_t f_list[], va_list arg_list)
{
int i, j, r_val, printed_chars;
printed_chars = 0;
for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
{
if (format[i] == '%') /*Checks for format specifiers*/
{
/*Iterates through struct to find the right func*/
for (j = 0; f_list[j].rm != NULL; j++)
{
if (format[i + 1] == f_list[j].rm[0])
{
r_val = f_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (f_list[j].rm == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putcharf(format[i]);
_putcharf(format[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1; /*Updating i to skip format symbols*/
}
else
{
_putcharf(format[i]); /*call the write function*/
printed_chars++;
}
}
return (printed_chars);
}
