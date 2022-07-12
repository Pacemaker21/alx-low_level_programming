#include "main.h"
/**
 * _puts -> this is a function that puts.
 * @str: The string to be printed.
 * Return: no return.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_puts(*str);
	}

	_puts('\n');
}
