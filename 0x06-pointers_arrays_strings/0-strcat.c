#include "main.h"
/**
 * _strcat - Concatenates the string pointed to by @src, including the
 * terminating null byte, to the end of the string pointed to by @dest.
 * @dest: first parameter
 * @src: second parameter
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
