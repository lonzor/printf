#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct ops - structure for each flag for printf to process
 *
 *
 *
 **/
struct ops
{
	int (*flags)(va_list)
};
typedef struct ops ops_t;

/*function prototypes*/
int _printf(const char *format, ...);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
int char_func(va_list list);
int string_func(va_list list)
int percent_func(va_list list)
int int_func(va_list args);
#endif
