#include "holberton.h"
/**
 * puts_half - print character of a string
 * @str: string literal
 * Return: nothing
 */
void puts_half(char *str)
{
int i = 0;
int length;
while (*(str + i) != '\0')
i++;
if (i % 2 == 0)
length = i / 2;
else
length = (i + 1) / 2;
for (i = 1; i < length; i++)
str++;
for (i = 0; i < length; i++)
{
str++;
_putchar(*str);
}
_putchar('\n');
}
