#include <stdio.h>
/**
 * main - A program that print a line using the printf function
 *
 * Return: Always 0
 */
int main(void)
{
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of short int: %ld byte(s)\n", sizeof(short int));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long int: %ld byte(s)\n", sizeof(long int));
printf("Size of float: %ld byte(s)\n", sizeof(float));
printf("Size of double: %ld byte(s)\n", sizeof(double));
printf("Size of long double: %ld byte(s)\n", sizeof(long double));
return (0);
}
