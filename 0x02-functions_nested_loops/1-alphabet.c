#include "main.h"

/**
 * print_alphabet - make alphabet in lowercase and newline
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
