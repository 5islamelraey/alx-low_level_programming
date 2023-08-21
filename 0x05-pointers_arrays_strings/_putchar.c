#include <unistd>

/**
 * _putchar - write the chars
 * @c: the char
 * Return: return 1 if pass and error if not
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
