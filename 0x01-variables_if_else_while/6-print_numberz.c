#include <stdio.h>

/**
 * main - staer
 * Description:  prints all single digit numbers of base 10 starting from 0
 * Return: return 0
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar("\n");

	return (0);
}
