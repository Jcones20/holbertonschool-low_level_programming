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

for (r = 48; r <= 56; r++)

for (r = 49; r <= 57; r++)

if (r > 9)

putchar(r);
putchar(r);
if (r != 56 || r != 57)

putchar(',');
putchar(' ');



putchar('\n');
return (0);
}
