#include "holberton.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	if (!c)
		return (-1);

	return (write(1, &c, 1));
}

/**
 * char_func - flag that corresponds to printing chars
 * @args: args
 * c_count: amount of chars printed
 * Return: int amount of characters printed
 **/
int char_func(va_list args)
{
	int c_count;

	c_count = va_arg(args, int);
	return (_putchar(c_count));
}

/**
 * string_func - flag that corresponds to printing str
 * @args: args
 * @s_count: amount of chars printed
 * Return: int amount of chars printed
 **/
int str_func(va_list args)
{
	int i;
	int s_count = 0;
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++, s_count++)
		_putchar(str[i]);
	return (s_count);
}

/**
 * percent_func - flag that corresponds to printing %
 * @args: args
 * Return: they symbol %
 **/
int percent_func(va_list args)
{
	if (va_arg(args, int) == '%')
	{
		printf("calls percent\n");
		_putchar(37);
		return (1);
	}
	return (0);
}
