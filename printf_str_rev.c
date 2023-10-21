#include "main.h"

/**
 * printf_str_reverse - It prints strings in reverse
 * @argm: arguments
 *
 * Return: the reversed string
 */
int printf_str_reverse(va_list argm)
{
	int a, b = 0;
	char *s = va_arg(argm, char);

	if (s == NULL)

	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
