#include "holberton.h"
/**
 * _puts - prints string
 * @str: this is the string literal
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

