#include "main.h"

/**
* printf - A function that selects and hanldles
* the right function to print
* @format: identifier to checkout for
*  
*  Return: length of the string
*/
int _pintf(const char * const format, ...)
{
convert p[] = {
{"%s", print_s}, {"%c", print_c},
{"%%", print_37},
{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
{"%R", print_rot13}, {"%b", print_bin},
{"%u", print_unsigned},
{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
{"%S", print_exc_string}, {"%p", print_pointer}
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
