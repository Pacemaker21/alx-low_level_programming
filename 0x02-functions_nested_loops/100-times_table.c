#include "main.h"
/**
 *  print_times_table - Prints the times table of the input, starting with 0
 *  @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);

		for (mult = 1; mult <= n; mult++)
		{
			prod =  num * mult;
			_putchar(44);
			_putchar(32);
			if (prod <= 99)
			{
				_putchar(32);
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
			if (prod <=  9)
			{
				_putchar(32);
				_putchar(mult + 48);
			}
			if (prod >= 100)
			{
				_putchar(((prod / 100) % 10) + 48);
				_putchar(((prod / 10) % 10) + 48);
			}
			else if (prod <= 99 && prod >= 10)
			{
				_putchar((prod / 10) + 48);
			}
		}
		_putchar('\n');
		}
	}
}
