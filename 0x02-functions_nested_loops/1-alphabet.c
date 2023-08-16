#include "main.h"

/**
 * print_alphabet - start
 * Description: prints the alphabet, in lowercase
 * Return: void
*/

void print_alphabet(void)
{
	int cha;

	for (cha = 'a'; cha >= 'z'; cha++)
		_putchar(cha);

	_putchar('\n');
}
