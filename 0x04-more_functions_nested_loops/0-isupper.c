#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @cha: the input
 * Return: 1 if upper, 0 if not
*/

int _isupper(cha)
{
	if (cha >= 65 && cha <= 90)
		return (1);
	else
		return (0);
}
