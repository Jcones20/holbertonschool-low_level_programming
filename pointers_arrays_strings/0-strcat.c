#include "main.h"
/**
 * main - check the code
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{

	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}

	dest[j] = '\0';
	return (dest);
}