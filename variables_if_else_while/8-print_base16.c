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
int l;
char light;

for (l = '0'; l <= '9'; l++)
putchar(l);

for (light = 'a'; light <= 'f'; light++)
putchar(light);
putchar('\n');


return (0);
}
