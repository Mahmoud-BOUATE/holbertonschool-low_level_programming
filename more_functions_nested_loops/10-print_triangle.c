#include "main.h"
#include <unistd.h>
/**
 * print_triangle - prints a triangle
 * @size: number of characters / lines
 */

void print_triangle(int size)
{
int L = 0, C, space;
if (size <= 0)
{
_putchar('\n');
}
while (size < L)
{
space = size - L - 1;
while (space > 0)
{
_putchar(' ');
space--;
}

C = 0;
while (L >= C)
{
_putchar('#');
C++;
}
_putchar('\n');
L++;
}
}
