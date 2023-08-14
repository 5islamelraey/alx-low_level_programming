#include <unistd.h>

/**
 * main - Start the pro
 * Description: print a statment but don't use printf or puts functions
 * Return: return 0
*/

int main(void)
{
	char list[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, list, 59);
	return (1);
}
