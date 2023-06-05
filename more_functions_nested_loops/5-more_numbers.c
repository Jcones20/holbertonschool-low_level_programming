#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int k;
	int p;
	for (p = 0; p < 10; p++)
	{
	 for (k = 0; k <= 14; k++)
	 {
	 if (k >= 10)
	 {
	 _putchar(k / 10 + '0');
	 }
	 _putchar(k % 10 + '0');
	 }
	 _putchar('\n');
	}
}
