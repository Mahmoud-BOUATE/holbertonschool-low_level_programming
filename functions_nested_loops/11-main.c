#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{

while (n <= 98)
{
n++;
printf("%d\n" , n);
}
if (n > 98)
{
n--;
printf("%d\n" , n);
}
else if (n == 98)
{
printf("%d", n)
}
_putchar('\n');
}
