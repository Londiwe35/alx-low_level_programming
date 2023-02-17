#include <stdio.h>

/**
 * main - prints the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	char le;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (le = 'a'; le <= 'f'; le++)
		putchar(le);

	putchar('\n');

	return (0);
}
