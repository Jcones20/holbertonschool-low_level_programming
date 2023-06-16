#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @e: the string to be printed.
 * Return: reverse.
 */
void _print_rev_recursion(char *e)
{
	if (*e)
	{
		_print_rev_recursion(e + 1);
		_putchar(*e);
	}
}
