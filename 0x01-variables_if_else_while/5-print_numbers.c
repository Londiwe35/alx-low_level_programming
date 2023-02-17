#include <stdio.h>

/**
 * main - prints single digits from 0 to 9, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
