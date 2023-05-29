#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print number  if positiven, zero or negative
 * Return: Alwaysi (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 97; i < 123; i++)
	{
	if (i != 101 && i != 113)
		{
	putchar(i);
	}
	}
	putchar('\n');
	return (0);
}
