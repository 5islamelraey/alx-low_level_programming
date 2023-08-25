#include "main.h"
#include <stdio>

/**
 * islower - find if the char lower
 * @c: char
 * Return: 1 if true, 0 if falsh
*/

int islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * isdelimiter - know if ASCII is delimiter or not
 * @c: char
 * Return: 1 if true, 0 if falsh
*/

int isdelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}


/**
 * cap_string -  capitalizes all words of a string.
 * @s: string
 * Return: ptr
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int founddelimit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			founddelimit = 1;
		else if (islower(*s) && founddelimit)
		{
			*s -= 32;
			founddelimit = 0;
		}
		else
			founddelimit = 0;
		s++;
	}
	return (ptr);
}
