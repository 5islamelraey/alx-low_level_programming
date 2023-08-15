#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 * Description: print the value of the last digit in a number n
 * Return: return 0
*/

int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (last_num > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_num);
	else if (last_num == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_num);
	else if (last_num < 6 && last_num != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_num);

	return (0);
}
