#include "main.h"
/**
 * print_diagonal - draw diagonal line
 * @n: equals zero
 * Return: Always 0.
 */
void print_diagonal(int n)
{
        int k, f;
        if (n <= 0)
        {
        _putchar('\n');
        }
        else
        {
        for (k = 0; k < n; k++)
        {
        for (f = 0; f < k; f++)
        {
        _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
        }
