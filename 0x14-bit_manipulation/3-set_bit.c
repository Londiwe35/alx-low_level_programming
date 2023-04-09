#include "main.h"

/**
 * set_bit - will set the value of a bit to 1 at a given index.
 * @a: The pointer of an unsigned long int
 * @index: The index of the bit
 * Return: 1 for a successful prog run, otherwise -1
 */

int set_bit(unsigned long int *a, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*a = (*a | i);

	return (1);
}
