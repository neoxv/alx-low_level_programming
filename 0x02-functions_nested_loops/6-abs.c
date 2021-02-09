#include "holberton.h"
/**
 * _abs - return te absolute value of an input
 * @x: the value
 * Return: postive value of the number
 */
int _abs(int x)
{
if (x > 0 || x == 0)
return (x);
else if (x < 0)
return (x * -1);
return (0);
}
