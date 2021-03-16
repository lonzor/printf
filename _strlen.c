#include "holberton.h"

/**
 * _strlen - returns string length
 * @s: string
 * Return: nothing
 **/
int _strlen(char *s)
{
	int num;

	for (num = 0; *s != '\0'; s++)
		num++;

	return (num);
}
