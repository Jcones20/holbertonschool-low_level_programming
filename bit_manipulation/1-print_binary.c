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
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}

