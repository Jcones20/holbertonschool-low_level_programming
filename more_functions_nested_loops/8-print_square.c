#include "main.h"
/**
 *  print_square - prints a square, followed by a new line
 *  0size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > 0)
		{
			_putchar('#');
			size--;
		}

	}
}
