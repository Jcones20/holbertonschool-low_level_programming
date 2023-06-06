#include "main.h"
/**
 * _strlen - Calculates the length of a null-terminated string.
 *
 * @s: The null-terminated string.
 *
 * Return: The length of the string as an integer.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
