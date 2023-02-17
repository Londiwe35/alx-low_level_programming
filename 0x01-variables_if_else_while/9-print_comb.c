#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int h

		for (h = '0'; h <= '9'; h++)
		{
		putchar(h);
		if (h != '9')
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n')

		return (0);
}
