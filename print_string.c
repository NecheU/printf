#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int h;

	for (h = 0; str[h] != 0; h++)
		;
	return (h);
}

/**
 * _strlenc - function that returns the length of str
 * bit for const char pointer str
 * @str: char pointer
 *
 * Return: 1
 */
int _strlenc(const char *str)
{
	int h;

	for (h = 0; str[h] != 0; h++)
		;
	return (h);
}
