#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index]
