#include "main.h"

/**
 * clear_bit - will set the value of a bit to 0 at a given index.
 * @p: The pointer of an unsigned long int
 * @index: The index of the bit
 * Return: 1 for a successful prog run, otherwise -1
 */

int clear_bit(unsigned long int *p, unsigned int index)
{
	unsigned int y;

	if (index > 63)
		return (-1);

	y = 1 << index;

	if (*p & y)
		*p ^= y;

	return (1);
}
