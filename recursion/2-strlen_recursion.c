#include "main.h"
/**
 * _strlen_recursion - Return the length of a string.
 * @e: The string to be measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *e)
{
	int john = 0;

	if (e)
	{
		john++;
		john += _strlen_recursion(e + 1);
	}
	return (john);
}
