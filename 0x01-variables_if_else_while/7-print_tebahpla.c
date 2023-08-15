#include <stdio.h>

/**
 * main - start
 * Description: prints the lowercase alphabet in reverse
 * Return: return 0
*/

int main(void)
{
	char cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');

	return (0);
}
