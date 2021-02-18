#include "holberton.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the length of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
