#include "main.h"

/**
 * _isalpha - alphabetic character
 * @c: alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwith
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
