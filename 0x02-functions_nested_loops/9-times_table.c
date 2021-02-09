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
if (val < 10 && j != 9)
{
_putchar('0' + val);
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (val >= 10 && j != 9)
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
_putchar(',');
_putchar(' ');
}
else if (j == 9 && val < 10)
{
_putchar('0' + val);
_putchar('$');
}
else if (j == 9 && val >= 10)
{
_putchar('0' + (val / 10));
_putchar('0' + (val % 10));
_putchar('$');
}
}
_putchar('\n');
}
}
