#include "holberton.h"

/**
 * rev_func - Reverse string and get count of chars
 * @args: args from input
 * Return: count of chars
 **/
int rev_func(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	int len = 0;

	if (str == NULL)
		return (-1);

	while (str[len] != '\0')
	{
		len++;
		count++;
	}
	len--;

	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\0');
	return (count);
}
