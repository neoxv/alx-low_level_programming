#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: return a pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
while (*dest != '\0')
dest++;
for (i = 0; i < n; i++)
{
if (*src != '\0' && *src != "")
*dest = *src;
else
break;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
