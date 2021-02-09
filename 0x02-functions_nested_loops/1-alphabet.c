#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lower case
 *
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
char val = i;
_putchar(val);
}
_putchar('\n');
}
