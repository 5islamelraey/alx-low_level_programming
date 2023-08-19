#include "main.h"

/**
 * print_numbers - prints the numbers
 * Return: return 0
*/

void print_numbers(void)
{
	int number = 0;

	do {
		_outchar(number + 48);
		number++;
	} while (number >= 0 && number <= 9)

	_putchar('\n');
}
