#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 49; digit2 < 58; digit2++)
		{
			for (digit3 = 50; digit3 < 58; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 != 55 || digit2 != 56)
				continue;

			putchar(',');
			putchar(' ');
			}
		}
	}
	 putchar('\n');

return (0);
}
