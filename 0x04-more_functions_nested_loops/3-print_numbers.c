#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: return 
0*/

void print_numbers(void)
{
	int number = 0;

	do 
	{
		_outchar(number + 48);
		number = 20;
	}
	while (number >= 0 && number <= 9)
	_putchar('\n');
}
