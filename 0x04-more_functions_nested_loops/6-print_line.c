#include "holberton.h"
/**
 * print_line - prints line
 * @n: the char
 * Return: nothing
 */
void print_line(int n)
{
int i = n;
for (i = n; i > 0; i--)
_putchar('_');
_putchar('\n');
}
