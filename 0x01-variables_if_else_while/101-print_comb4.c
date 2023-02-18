#include <stdio.h>

/**
 * main - prints different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int f;
	int y;
	int u = 0;

	while (u < 10)
	{
		y = 0;
		while (y < 10)
		{
			f = 0;
			while (f < 10)
			{
				if (f != y && y != u && u < y && y < f)
				{
					putchar('0' + u);
					putchar('0' + y);
					putchar('0' + f);

					if (f + y + u != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				f++;

			}
			y++;
		}
		u++;
	}
	putchar('\n');

	return (0);
}
