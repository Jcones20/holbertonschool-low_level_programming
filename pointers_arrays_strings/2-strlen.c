#include "main.h"
/**
 * Calculates the length of a null-terminated string.
 *
 * @param str The null-terminated string.
 * @return The length of the string as an integer.
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
