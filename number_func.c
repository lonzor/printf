#include "holberton.h"
/**
  *int_func - prints an integer
  *@args: the argument being passed
  *Return: overall length of the printed number
  */
int int_func(va_list args)
{
	int div = 1000000000, olen = 0, min_true = 0, n;

	n = va_arg(args, int);

	if (n < 0)
	{
		if (n == INT_MIN) /* If true min is flag for last digit printed*/
		{
			min_true = 1;
			n++;
		}
		_putchar('-'); /*prints - for neg number*/
		olen++;
	}
	while (div / 10 != 0)
	{
		if (n / div != 0)
		{
		_putchar('0' + ((n / div) % 10)); /*printing numbers starting from the left most placement*/
		olen++;
		}
		div /= 10;
	}
	_putchar('0' + (min_true == 1 ? 8 : n % 10)); /* printing last number 8 if min_true or other if not*/
	olen++;
	return (olen); /*returns the length of the number (including - if neg)*/
}
