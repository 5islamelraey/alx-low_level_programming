#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int n_line;
	int cha;

	for (n_line = 0; n_line <= 9; n_line++)
	{
		for (cha = 'a'; cha <= 'z'; cha++)
			_putchar(cha);
		_putchar('\n');
	}
}
