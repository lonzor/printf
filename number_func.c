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
		if (n == INT_MIN) /*If true min is flag for last digit printed*/
		{
			min_true = 1;
			n++; /* incriments INT_MIN to -2147483647 for pos flip*/
		}
		_putchar('-'); /*prints - for neg number*/
		olen++;
		n = -n; /*flips neg num to positive for dividing*/
	}
	while (div / 10 != 0)
	{
		if (n / div != 0)
		{ /*printing numbers starting from the left most placement*/
			_putchar((n / div) % 10);
			olen++;
		}
		div /= 10;
	}
	/* printing last number 8 if min_true = 1 else n %= 10*/
	_putchar('0' + (min_true == 1 ? 8 : n % 10));
	olen++;
	return (olen); /*return the number of char printed*/
}
