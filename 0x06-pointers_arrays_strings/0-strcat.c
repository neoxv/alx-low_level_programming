#include "holberton.h"
/**
 * _strcat - concatenate strings
 * @dest: the first string
 * @src: the second string
 * Return: return a pointer to the value.
 */
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
