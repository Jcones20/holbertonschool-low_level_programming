#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @egcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion: The srting to be printed.
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
