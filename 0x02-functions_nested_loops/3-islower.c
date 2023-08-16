#include "main.h"

/**
 * _islower -  lowercase character
 * @c: checks for lowercase character
 * Return: return 1 if c is lowercase & 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
