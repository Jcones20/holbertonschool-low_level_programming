#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int j, c;

	for (j = 1; j <= 10; j++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar (c % 10 + '0');
		}
		_putchar('n');
	}
}
