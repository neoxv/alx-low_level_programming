#include "holberton.h"
/**
 * _islower - prints 1 if c is a lowercase letter
 *@c: is the letter parameter
 *Return: is always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
