#include "holberton.h"
/**
 * _printf - prints our desired format from the flag list
 * @format: the desired output from flags
 * Return: count of chars that printed
 **/
int _printf(const char *format, ...)
{
	int char_count = 0, j, i;
	va_list args;

	ops_t flags_list[] = {
		{"c", char_func},
		{"s", str_func},
		{"d", int_func},
		{"i", int_func},
		{"r", rev_func},
	};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != 00; i++)
	{
		j = 0;

		if (format[i] == '%')
		{ /* specifiers are compared here */
			while (j < 5 && flags_list[j].spec[0] != format[i + 1])
				j++;
			if (j < 5) /* flag list true */
			{char_count += flags_list[j].flags(args);
				i += 2;
			}
			if (format[i + 1] == '%') /* if %% is passed */
				i++; /*format[i] will print % at line 42*/
		}
		if (format[i] != '\0')
		{ /* printing all the chars in args */
			_putchar(format[i]);
			char_count++;
		}
		else
			break;
	}
	va_end(args);
	return (char_count);
}
