#include <stdio.h>

/**
 * main - start
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: return 0
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");

	return (0);
}
