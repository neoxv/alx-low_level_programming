#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of intgers
 * @a: the array
 * @n: the size
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if ((n - i) > 1)
printf(", ");
}
printf("\n");

}
