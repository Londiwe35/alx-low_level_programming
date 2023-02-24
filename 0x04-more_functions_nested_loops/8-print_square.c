#include "main.h"

/**
 * print_square - prints a square, followed ny a new line
 * @size: size of the square
 * Return: Void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;
		int k;

		for (l = 0; l < size; l++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(#);
			}
			_putchar('\n');
		}
	}
}
