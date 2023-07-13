#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary numbers to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
