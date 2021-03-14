#include "holberton.h"

/**
 * char_func - flag that corresponds to printing chars
 * @list: args
 * c_count: amount of chars printed
 * Return: int amount of characters printed
 **/
int char_func(va_list list)
{
	int c_count;

	c_count = va_arg(list, int);
	return (_putchar(c_count));
}

/**
 * string_func - flag that corresponds to printing str
 * @list: args
 * @s_count: amount of chars printed
 * Return: int amount of chars printed
 **/
int string_func(va_list list)
{
	int i;
	int s_count = 0;
	char *str;

	str = va_arg(list, char*)
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++, s_count++)
		return (s_count);
}

/**
 * percent_func - flag that corresponds to printing %
 * @list: args
 * Return: they symbol %
 **/
int percent_func(va_list list)
{
	char *str;

	str = '%';
	if (va-arg(list, int) == *str)
		return (*str);
	return (*str);
}

/**
 * i'm not sure we need two different functions for double and int
 * we need to somehow figure out how to get the length of the number
 * i'm not sure if we should that in the function here or as a
 * seperate function.
 **/
int int_func(va_list list)
{
}
