#include "holberton.h"
/**
 * _strcat - concatenate strings
 * @dest: the first string
 * @src: the second string
 * Return: return a pointer to the value.
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i;
while (dest[len])
len++;
for (i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
len++;
}
dest[len] = src[i];
dest[len] = '\0';
return (dest);
}
