#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - check the code
 * @str: lava
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;

	if (len % 2 == 0)
{
	printf("%s\n", str + n + 1);
}
	else
{
	printf("%s\n", str + n + 1);
}
}
