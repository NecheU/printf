#include "main.h"

/**
 * printf -  a function that produces output according to a format.
 * @format: is a character string. The format string is
 * composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings
 */
 
int _printf(const char *format, ...)
{
	va_list contents;
	int size;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(contents, format);
	size = hanlder(format, contents);

	_putchar(-1);
	va_end(contents);

	return (size);
}