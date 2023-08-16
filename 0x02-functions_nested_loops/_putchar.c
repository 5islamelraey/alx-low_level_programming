#include <unistd.h>
#include <main.h>

/**
 * _putchar - write cha
 * @cha: print cha
 * Return: 1 if it's successfully worked
 *         -1 if there is an error
*/

int _putchar(char cha)
{
	return (write(1, &cha, 1));
}
