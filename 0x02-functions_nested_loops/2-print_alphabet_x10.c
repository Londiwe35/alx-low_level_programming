#include "main.h"

/**
 * print_alphabet_x10 - prints the alpha 10 times and newline
 * Return: void
 */

void print_alphabet_x10(void)
{
	char h;
	int j = 0;

	while (j <= 9)
	{
		for (h = 'a'; h <= 'z'; h++)
		{_putchar(h);

			_putchar('\n');
			j++;
		}
	}
}
