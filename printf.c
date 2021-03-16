#include "holberton.h"
/**
 * _printf - prints our desired format from the flag list
 * the we get a data type or something that doesn't work.
 * I'm not sure if we need a function that checks the input first.
 * I feel like that shoudl happen first.
 **/
int _printf(const char *format, ...)
{
	int char_count= 0, j, i;
	va_list args;
	
	ops_t flags_list[] = {
		{"c", char_func},
		{"s", str_func},
		/* {"%", percent_func},*/
		{"d", int_func},
		{"i", int_func},
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != 00; i++)
	{
		j = 0;
		if (format[i] == '%')
		{
			while (j < 5 && flags_list[j].spec[0] != format[i + 1])  /* check type */
				j++;
			if (format[i + 1] == '%')
				i++;
			if (j < 5) /* flag list true */
			{
				char_count += flags_list[j].flags(args);
				i += 2;
			}
		}/*prints char if no spec is passed*/
		if (format[i] != '\0')
		{
			_putchar(format[i]);
			char_count++;
		}
		else
			break;
	}
	va_end(args);
	return (char_count);
}
