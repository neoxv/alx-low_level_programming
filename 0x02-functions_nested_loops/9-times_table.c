#include "holberton.h"
/**
 * times_table - prints out the time table
 * Return: nothing
 */
void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int val = i * j;
if (j == 0)
{
_putchar('0');
continue;
}
_putchar(',');
_putchar(' ');
if (val < 10 && j != 9 && j != 0)
{
_putchar(' ');
_putchar('0' + val);
}
else if (val >= 10 && j != 9 && j != 0)
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
}
else if (j == 9 && val < 10)
{
_putchar(' ');
_putchar('0' + val);
}
else if (j == 9 && val >= 10)
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
}
}
_putchar('\n');
}
}
