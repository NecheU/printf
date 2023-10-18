#include "main.h"

/**
 * handler - Checks and contols format specifiers
 * @list: List of arguments
 * @str: stings to be considered
 *
 * Return: Total size of args and total
 * size of base strings
 */

int handler(const char *str, va_list list)
{
	int size, a, b;

	size = 0;

	for (a = 0; str[a] != 0; a++)
	{
		if (str[a] == '%')
		{
			b = percent_handler(str, list, &a);
			if (b == -1)
				return (-1);

			size += b;
			continue;
		}
		_putchar(str[a]);
		size = size + 1;
	}

	return (size);
}



/**
 * percent_handler - Checks and controls percent
 * format specifier
 * @str: string format
 * @i: iterator
 * @@list: list of arguments
 * Return: Size of numbers of elements printed
 */

int percent_handler(const char *str, va_list list, int i)
{
	int size, b, num_format;

	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_up}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};


	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	num_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = b = 0; b < num_formats; b++)
	{
		if (str[*i] == formats[b].type)
		{
			size = formats[b].f(list);
			return (size);
		}
	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
