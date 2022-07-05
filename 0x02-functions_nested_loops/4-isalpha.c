#include "main.h"
/**
 *  _isalpha -> check for alphabetical letters
 *  @c: a charter to be checked on
 *  Return: return 1 or 0 depending on conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
