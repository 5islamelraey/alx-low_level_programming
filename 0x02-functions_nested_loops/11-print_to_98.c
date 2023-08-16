#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @num: the number we will print
*/

void print_to_98(int num)
{
	int count;

	if (num > 98)
		for (count = num; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = num; count > 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
