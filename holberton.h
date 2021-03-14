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
#endif
