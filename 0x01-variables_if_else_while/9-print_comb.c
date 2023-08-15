#include <stdio.h>

/**
 * main - start
 * description: prints all possible combinations of single-digit numbers
 * Return: return 0
*/

int main(void)
{
	int number = 48;

	while (number <= 102)
	{
		putchar(number);

		if (number == 57)
			number += 39;
		number++;
	}
	putchar('\n');

	return (0);
}
