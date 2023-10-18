#include "main.h"

/**
 * printf_string - Function that prints string
 * @args: arguments
 *
 * Return: the length of the string
 */

int printf_string(va_list args)
{
	char *str;
	int h;
	int len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (h = 0; h < len; h++)
			_putchar(str[h]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (h = 0; h < len; h++)
			_putchar(str[h]);
		return (len);
	}
}
