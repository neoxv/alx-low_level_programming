#include "holberton.h"
/**
 * _strcpy - copy string
 * @dest: end
 * @src: start
 * Return: nothing.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
i++;
}
*dest = *src;
while (i >= 0)
{
dest--;
i--;
}
return (dest);
}
