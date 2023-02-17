#include <stdio.h>

/**
 * main - prints alphabet in reverse, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char lr;

	for (lr = 'z'; lr <= 'a'; lr--)
		putchar(lr);

	putchar('\n')

	return (0);
}
