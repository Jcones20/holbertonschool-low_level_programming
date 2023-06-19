#include "main.h"
#include<stdio.h>

/**
 * print_diagrams - prints the sun of the two diagonals
 * @a: the matrix55 of integers.
 * @size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0, index < size; index++)
	{
		sum1 += '[index];
		a += size;
	}

	a += size;

	for (index < size; index < size; index++)
	{
		sum2 += a[index];
		a += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
