#include "holberton.h"
/**
 * _isupper - checks if a char is an upper case
 * @c: is the char
 * Return: either 1 or 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
