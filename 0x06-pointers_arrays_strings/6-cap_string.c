#include "holberton.h"
/**
 * cap_string - captilize string
 * @a: the string
 * Return: return the char
 */
char *cap_string(char *a)
{
int i = 0;
while (a[i + 1] != '\0')
{
if (a[i] == 32)
{
if (a[i + 1] >= 97 && a[i + 1] <= 122)
a[i + 1] = a[i + 1] - 32;
}
i++;
}

return (a);
}
