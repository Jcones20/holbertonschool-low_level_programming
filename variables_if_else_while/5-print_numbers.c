#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints numbers from 0 to 9.
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	printf("%d", i);
	}
	putchar('\n');
	return (0);
}
