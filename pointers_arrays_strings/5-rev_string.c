#include "main.h"

/**
 * rev_string - check the code
 * @s: jk
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int pop = 0, corn = 0;
	char tmp;

	while (s[corn++])
	pop++;

	for (corn = pop - 1; corn >= pop / 2; corn--)
	{
	tmp = s[corn];
	s[corn] = s[pop - corn - 1];
	s[pop - corn - 1] = tmp;
	}
}
