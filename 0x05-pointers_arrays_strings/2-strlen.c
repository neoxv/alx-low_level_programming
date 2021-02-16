#include "holberton.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string literal
 * Return: integer length
 */
int _strlen(char *s)
{
int i = 0;
for (; s[i] != '\0';)
i++;
return (i--);
}
