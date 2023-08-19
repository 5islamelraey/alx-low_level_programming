#include "main"

/**
 * print_line - draws a straight line in the terminal
 * @n: num of time
*/

void print_line(int n)
{
	int ln_char;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln_char = 1; ln_char <= n; ln_char++)
			_putchar('_');
		_putchar('\n');
	}
}
