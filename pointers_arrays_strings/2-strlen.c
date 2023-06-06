#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 */
int _strlen(char *s)
{
	int best = 0;

	while (*s != '\0')
	{
		best++;
		s++;
	}

	return (best);
}
