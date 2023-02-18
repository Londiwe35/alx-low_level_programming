#include <stdio.h>

/**
 * main - prints different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int g;
	int x = 0;

	while (x < 10)
	{
		g = 0;
		while (g < 10)
		{
			if (x != g && x < g)
			{
				putchar('0' + x);
				putchar('0' + g);

				if (g + x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			g++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
