#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of ints
 * @n: num of elements
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}