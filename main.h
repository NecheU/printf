#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 * 
 */

typedef struct format
{
		char *ph;
			int (*function)();
} convert;

int _putchar(char c);
int printf_char(va_list contents);
int _printf(const char *format, ...);
int printf_string(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int printf_37(void);
int printf_rot_13(va_list char_rot);
int printf_str_reverse(va_list argm);



#endif
