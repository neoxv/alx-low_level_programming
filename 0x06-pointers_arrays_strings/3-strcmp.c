#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
i * Return: and int
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, a1, a2;
while (s1[i] != '\0')
{
a1 = (int) s1[i];
a2 = (int) s2[i];
if (a1 > a2)
return (a1 - a2);
else if (a1 < a2)
return (a1 - a2);
i++;
}
return (0);
}
