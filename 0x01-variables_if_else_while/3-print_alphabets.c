#include <stdio.h>

/**
 * main - start
 * Description: prints the alphabet in lowercase and upppercase
 * Return: return 0
*/

int main(void)
{
	char cha_l = 'a';
	char cha_u = 'A';

	while (cha_l <= 'z')
	{
		putchar(cha_l);
		cha_l++;
	}

	while (cha_u <= 'Z')
	{
		putchar(cha_u);
		cha_u++;
	}

	putchar('\n');
	return (0);
}
