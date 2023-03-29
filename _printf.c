#include "main.h"


/**
 * _printf - program print to print
 * @format: parameter
 *
 * Return: 0
 *
 */


int _printf(const char *format, ...)
{

int printed_chars;
changing_t f_list[] = {

{"c", print_c},
{"s", print_s},
{"%", print_percent},
{"d", print_d_i},
{"i", print_d_i},
{NULL, NULL}

};

va_list arg_list;

if (format == NULL)
return (-1);

va_start(arg_list, format);


printed_chars = parser(format, f_list, arg_list);

va_end(arg_list);

return (printed_chars);
}
