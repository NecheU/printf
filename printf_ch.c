#include "maim.h"

/**
 * printf_char - Function that print a char
 * @contents: arguments
 *
 * Return: 1
 */
int printf_char(va_list contents)
{
	char str;

	str = va_arg(contents, int);
	_putchar(str);
	return (1);
}
