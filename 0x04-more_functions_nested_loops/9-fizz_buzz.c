#include "holberton.h"
#include <stdio.h>
/**
 * print_fizzbuzz - prints num
 * Return: nothing
 */
void print_fizzbuzz(void)
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

