#include "holberton.h"
/**
 * print_square - prints line
 * @n: the char
 * Return: nothing
 */
void print_square(int n)
{
int i = 0;
int j = 0;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
_putchar('#');
_putchar('\n');
}
}
