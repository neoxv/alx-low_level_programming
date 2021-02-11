#include "holberton.h"
#include <stdio.h>
/**
 * print_fizz-buzz - prints num
 * @n: the char
 * Return: nothing
 */
void print_fizz-buzz(void)
{
int i = 1;
for (i = 1; i < 100; i++)
{
if (i % 3 && i % 5)
{
printf("FizzBuzz");
}
else if (i % 3)
{
printf("Fizz");
continue;
}
else if (i % 5)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
}
}

