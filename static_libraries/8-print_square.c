#include "main.h"
/**
 *  print_square - prints a square, followed by a new line
 *  @size: size of the square
 */
void print_square(int size)
{
	int width = size, length = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (length > 0)
		{
			while (width > 0)
			{
				_putchar('#');
				width--;
			}
			_putchar('\n');
			width = size;
			length--;
		}
}
}
