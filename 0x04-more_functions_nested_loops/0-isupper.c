#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the input
 * Return: 1 if upper, 0 if not
*/

int _isupper(c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
