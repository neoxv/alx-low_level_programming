#include "holberton.h"
/**
 * print_diagonal - prints line
 * @n: the char
 * Return: nothing
 */
void print_diagonal(int n)
{
int i = n;
int j = 0;
for (i = n; i > 0; i--)
{
_putchar('\');
_putchar('\n');
for (j = i; j > 0; j--)
_putchar(' ');
}
}
