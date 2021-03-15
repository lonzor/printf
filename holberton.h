#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * struct ops - structure for each flag for printf to process
 * @spec: the specifier being passed
 * @flags: detects and chooses the function to use
 * Return: int = the length of the string printed
 **/
typedef struct ops
{
	char *spec;
	int (*flags)(va_list args);
} ops_t;

/*function prototypes*/
int _printf(const char *format, ...);
int _putchar(int c);
int char_func(va_list list);
int str_func(va_list list);
int percent_func(va_list list);
int int_func(va_list args);
#endif
