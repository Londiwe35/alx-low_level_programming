#include <stdio.h>

/**
 * main - prints all combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int h;

		for (h = 48; h < 58; h++)
		{
			putchar(h);
			if (h != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n')

		return (0);
}
