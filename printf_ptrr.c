#include "main.h"

int _strcmp(char *, char *);

/**
 * print_pointer - Prints a num in hexadecimal format
 * @list: list of num to print
 *
 * Return: length of the num
 */

int print_pointer(va_list list)
{
	char *hex;
	int size;

	hex = itoa(va_arg(list, unsigned long int ), 16);

	if (!_strcmp(hex, "0"))
		return (printf("(nil)"));

		size = print("0x");

		if (!_strcmp(hex, "-1"))
		size += print("ffffffffffffffff");

		else

			size += print(hex);

			return (size);
}


/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int u;

	for (u = 0; s1[u] != '\0'; u++)
	{
		if (s1[u] != s2[u])
			return (s1[u] - s2[u]);
	}

	return (0);
}
