#include "main.h"

/**
 * printf_space_plus_hash - Handles specifiers for +, space and #
 * @contents: list of arguments
 * @format: formats
 * Return: 1
 */

int _printf_space_plus_hash(const char *format, ...)
{
	va_list contents;
	va_start(contents, format);
	int count = 0, a, len;

	const char *space = format;

	while (*space != '\0')
	{
		if (*space == '%')
		{
			space++;
			 int plus_glag = 0;
			 int space_flag = 0;
			 int hash_flag = 0;

			 while (*space == '+' || *space == ' ' || *space == '#')
			 {
				 if (*space == '+')
				 {
					 plus_flag = 1;
				 }
				 else if (*space == ' ')
				 {
					 space_flag = 1;
				 }
				 else if (*space == '#')
				 {
					 hash_flag = 1;
				 }
				 space++;
			 }

			 if (*space == 'c')
			 {
				 a = va_arg(contents, int);
				 count += write(1, &a, 1);
			 }
			 else if 
				 
				 (*space == 's')
				 {
					 const char *s = va_arg(contents, const char *);
					 len = 0;

					 while (s[len] != '\0')
						 len++;
					 count += write(1, s, len);
				 }
			 else if (*space == '%')
			 {
				 count += write(1, "%", 1);
			 }
			 else
			 {
				 return (-1);
			 }
		}
		else
		{
			count += write(1, space, 1);
		}
		space++;
	}

	va_end(contents);
	return (count);
}

