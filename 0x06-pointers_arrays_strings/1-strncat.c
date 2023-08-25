#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: retuen dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	return (dest);
}
