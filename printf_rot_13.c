#include "main.h"

/**
 * printf_rot_13 - it converra a char to rot13
 * @char_rot: argument
 *
 * Return: counter
 */

int printf_rot_13(va_list char_rot)
{
	int y, z, counter = 0;
	int h = 0;

	char *s = va_arg(char_rot, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	
	if (s == NULL)
	for (y = 0; s[y]; y++)
	{
		h = 0;
		for (z = 0; al[z] && !h; z++)
		{
			if (s[y] == al[z])
			{
				_putchar(bl[z]);
				counter++;
				h = 1;
			}
		}
		if (!h)
		{
			_putchar(s[y]);
			counter++;
		}
	}
	return (counter);
}
