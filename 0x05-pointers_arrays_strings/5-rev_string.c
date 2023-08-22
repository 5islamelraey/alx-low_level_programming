#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: prameter
*/

void rev_string(char *s)
{
	int i, rev;
	char swap;

	for (rev = 0; s[rev] != '\0'; ++rev)
		;
	for (i = 0; i < rev / 2; i++)
	{
		swap = s[i];
		s[i] = s[rev - 1 - i];
		s[rev - 1 - i] = swap;
	}
}
