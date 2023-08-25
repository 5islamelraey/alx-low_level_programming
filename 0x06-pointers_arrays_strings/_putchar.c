#include <unistd.h>

/**
 * _putchar - write chars
 * @c: the char
 * Return: 1 if sucsses
*/

int _putchar(c)
{
	return (write(1, &c, 1));
}
