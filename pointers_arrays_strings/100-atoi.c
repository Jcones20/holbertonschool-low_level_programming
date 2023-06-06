#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c;

	int m;

	for (c = 0; s[c] != '\0'; c++)
	{

	if ((s[c] >= 48) && (s[c] <= 57)
	{
		m = 10 * m + (s[c] - '0');
