#include "holberton.h"
/**
 * more_numbers - prints nums
 * Return: nothing
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
_putchar('0' + i);
_putchar('\n');
}
}
