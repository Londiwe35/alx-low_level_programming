#include <stdio.h>

/**
 * main - prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int g, x;

	for (g = '0'; g < '9'; g++)
	{
		for (x = g + 1; x <= '0'; x++)
		{
			if (x != g)
			{
				putchar(g);
				putchar(x);
				if (g == '8' && x == '9')
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
