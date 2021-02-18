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
int len = 0, i;
while (dest[len])
len++;
for (i = 0; i < n; i++)
{
if (src[i])
dest[len] = src[i];
else
break;
len++;
}
dest[len] = '\0';
return (dest);
}
