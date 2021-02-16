#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: the string literal
 * Return: nothing
 */
void rev_string(char *s)
{
char temp, *start, *finish;
int i = 0;
int c = 0;
start = s;
finish = s;
while (*(s + i) != '\0')
i++;
for (c = 0; c < (i - 1); c++)
finish++;
for (c = 0; c < (i / 2); c++)
{
temp = *finish;
*finish = *start;
*start = temp;
start++;
finish--;
}
}
