#include "main.h"

/**
 * flip_bits - will return the number of bits you need to flip to get
 * from one number to another
 * @a: First number
 * @b: Second number
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned int bitnum;

	for (bitnum = 0; a || b; a >>= 1, b >>= 1)
	{
		if ((a & 1) != (b & 1))
			bitnum++;
	}

	return (bitnum);
}
