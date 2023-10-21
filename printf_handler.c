#include "main.h"

/**
* _printf - A function that selects and hanldles
* the right function to print
* @format: identifier to checkout for
*
* Return: length of the string
*/
int _printf(const char * const format, ...)
{
convert p[] = {
{"%s", printf_s}, {"%c", printf_c},
{"%%", printf_37},
{"%i", printf_i}, {"%d", printf_d}, {"%r", printf_revs},
{"%R", printf_rot13}, {"%b", printf_bin},
{"%u", printf_unsigned},
{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
{"%S", printf_exc_string}, {"%p", printf_pointer}
};

va_list args;
int e = 0, f, length = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[e] != '\0')
{
f = 13;
while (f >= 0)
{
if (p[f].ph[0] == format[e] && p[f].ph[1] == format[e + 1])
{
length += p[f].function(args);
e = e + 2;
goto Here;
}
f--;
}
_putchar(format[e]);
length++;
e++;
}
va_end(args);
return (length);
}
