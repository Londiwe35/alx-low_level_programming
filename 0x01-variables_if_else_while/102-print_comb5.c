#include <stdio.h>

/**
 * main - prints combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int k = 0;
	int p_o;
	int l_m;

	int j2;
	int h_v2;
	int z_v2;

	while (k <= 98)
	{
		p_o = (k / 10 + '0');
		l_m = (k % 10 + '0');
		j2 = 0;
		while (j2 <= 99)
		{
			h_v2 = (j2 / 10 + '0');
			z_v2 = (j2 % 10 + '0');

			if (k < j2)
			{
				putchar(p_o);
				putchar(l_m);
				putchar(' ');
				putchar(h_v2);
				putchar(z_v2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
			j2++
		}
		k++
	}
	putchar('\n');

	return (0);
}
