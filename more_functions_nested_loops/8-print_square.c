#include "main.h"
#include <unistd.h>
/**
 * print_square - prints a diagonal line of '\' characters
 * @size: number of characters / lines
 */
void print_square(int size)
{
int L = 0, C;
if (size <= 0)
{
_putchar('\n');
}
while (size > L)
{
C = 0;
while (size > C)
{
_putchar('#');
C++;
}
_putchar('\n');
L++;
}
}

