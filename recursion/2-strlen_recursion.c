#include "main.h"
#include "_putchar.c"
/**
 * _strlen_recursion - Return the length of a string.
 * @s: The string to be measure.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s)
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
	return (0);
}
