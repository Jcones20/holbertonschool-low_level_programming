#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;

for (r = 0; r < 10; r++)

putchar(r + '0');
if (r < 9)
{
putchar(',');
putchar(' ');

putchar('\n');
return (0);
}
