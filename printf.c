#include "holberton.h"
/**
 * _printf - prints our desired format from the flag list
 * the we get a data type or something that doesn't work.
 * I'm not sure if we need a function that checks the input first.
 * I feel like that shoudl happen first.
 **/
int _printf(const char *format, ...)
{
	int char_count, j, i;
	va_list agrs;
	ops_t flags_list[] = {
		{"c", char_func},
		{"s", str_func},
		{"%", percent_func},
		{"d", int_func},
		{"i", int_func},
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0') /* passing arg */
	{
		/* check for % && j + 1 != '\0' */
		j = 0;
		if (format[i] == '%' && format[i + 1] != '\0')
		{

			while (j < 5 && flags_list[j].spec[0] != format[i]) /* check type */
				j++;
			if (j < 5) /* flag list true */
				char_count += flags_list[j].ops(args);
		}
		i += 2;
	}
	va_end(ap);
	return (char_count);
}
