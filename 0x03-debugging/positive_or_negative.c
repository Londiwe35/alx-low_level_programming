#include "main.h"

/**
 * positive_or_negative - checks for positive and negative numbers
 * @i: the number to be checked
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is postive", i);
}
