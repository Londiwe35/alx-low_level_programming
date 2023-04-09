#include "main.h"

/**
 * print_binary - will print the binary rep of a number
 * @a: The unisgned long int
 * Return: None
 */

void print_binary(unsigned long int a)
{
	if (a >> 0)
	{
		if (a >> 1)
			print_binary(a >> 1);
		_putchar((a & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
