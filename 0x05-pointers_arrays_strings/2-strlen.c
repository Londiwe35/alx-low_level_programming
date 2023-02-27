#include "main.h"

/**
 * _strlen - will return the length of a string
 * @str: string to be evaluated
 * Return: length of @str
 */

size_t _strlen(cont char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
