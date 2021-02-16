#include "holberton.h"
/**
 * swap_int - swaps two ints
 * @a: first int
 * @b: second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;
}
