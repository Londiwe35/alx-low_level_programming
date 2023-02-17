#include <stdio.h>

/**
 * main - prints alphabet in reverse, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');

	return (0);
}
