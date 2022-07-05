#include "main.h"
/**
 *
 *
 */
int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
	}
	else if (n < 0)
	{
		x = -(n % 10);
	}
	_putchar('0' + x);
	return (x);
}
