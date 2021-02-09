#include "holberton.h"
/**
 * jack_bauer - prints 24 hours;
 * Return: none;
 */
void jack_bauer(void)
{
int hour;
int min;
for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
if (hour <= 9)
{
_putchar('0');
_putchar('0' + hour);
}
else if (hour > 9)
{
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
}
_putchar(':');
if (min <= 9)
{
_putchar('0');
_putchar('0' + min);
}
else if (min > 9)
{
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
}
_putchar('\n');
}
}
}
