#include "holberton.h"

/**
 * we need to check for NULL and what happens if
 * the we get a data type or something that doesn't work.
 * I'm not sure if we need a function that checks the input first.
 * I feel like that shoudl happen first.
 **/
int _printf(const char *format, ...)
{
	int char_count;
	ops_t flags_list[] = { 
		{"c", char_func},
		{"s", str_func},
		{"%", percent_func},
		{"d", int_func},
		{"i", int_func},
	};
}
