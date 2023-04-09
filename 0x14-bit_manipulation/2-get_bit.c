#include "main.h"

/**
 * get_bit - will return the value of a bit at a given index
 * @x: The unsigned int input
 * @index: The index of the bit
 * Return: The value of the bit
 */

int get_bit(unsigned long int x, unsigned int index)
{
	unsigned int z;

	if (x == 0 && index < 64)
		return (0);

	for (z = 0; z <= 63; x >>= 1, z++)
	{
		if (index == z)
		{
			return (x & 1);
		}
	}
	return (-1);
}
