#include "main.h"
/**
 * _strlen_recursion - Return the length of a string.
 * @S: The string to be measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int john = 0;

	if (s)
	{
		john++;
		john += _strlen_recursion(s +1);
	}
	return (john);
}
