#include <main.h>

/**
 * main - start
 * Description:  prints _putchar
 * Return: return 0
*/

int main(void)
{
	char list[] = "_putchar";
	int charac;

	for (charac = 0; charac <= 7; charac++)
		_putchar(list[charac]);
	_putchar('\n');

	return (0);
}
