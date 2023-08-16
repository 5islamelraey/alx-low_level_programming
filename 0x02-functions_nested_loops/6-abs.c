#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @num: the absolute value of an integer
 * Return: return the value of n
*/

int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;
	return (num);
}
