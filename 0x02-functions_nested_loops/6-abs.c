#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @c: the integer value to be computed
 * Return: Absolute value of number 0r zero
 */

int _abs(int c)
{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
