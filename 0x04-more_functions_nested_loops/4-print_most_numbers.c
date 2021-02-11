#include "holberton.h"
/**
 * print_most_numbers - prints nums
 * Return: nothing
 */
void print_most_numbers(void)
{
int i = 0;
for (i = 0; i < 9; i++)
{
if (i == 2 || i == 4)
continue;
_putchar('0' + i);
}
_putchar('\n');
}
