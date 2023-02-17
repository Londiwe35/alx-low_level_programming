#include <stdio.h>

/**
 * main - prints single digit numbers from 0 to 10, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
