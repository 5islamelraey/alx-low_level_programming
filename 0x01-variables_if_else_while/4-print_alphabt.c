#include <stdio.h>

/**
 * main - start
 * Description: Print all the letters except q and e
 * Return: return 0
*/

int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha == 'e' || cha == 'q')
			cha++;
		putchar(cha);
		cha++;
	}
	putchar('\n');

	return (0);
}
