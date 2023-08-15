#include <stdio.h>

/**
 * main - start
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: return 0
*/

int main(void)
{
	char cha = 'a';

	while (cha <= '2')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
