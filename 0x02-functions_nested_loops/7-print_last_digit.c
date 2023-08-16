#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @num: last digit
 * Return: return the last digit
*/

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		last_digit = (-1) * (num % 10);
	else
		last_digit = (num % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
