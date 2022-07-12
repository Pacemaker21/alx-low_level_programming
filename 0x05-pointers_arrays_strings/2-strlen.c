#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of 
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
