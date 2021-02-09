#include "holberton.h"
/**
 * print_last_digit - returns last digit of value.
 * @x: the value passed;
 * Return: last digit of value;
 */
int print_last_digit(int x)
{
int val = x % 10;
if (val < 0)
val = val * -1;
_putchar('0' + val);
return (val);
}
