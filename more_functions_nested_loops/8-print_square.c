#include <unistd.h>
#include "main.h"

/**
 * print_square - prints a diagonal line of '\' characters
 * @size: number of characters / lines
 */
void print_square(int size)
{
int L = 0, C;
while (L < size)
{
C = 0;
while(C < size)
{
_putchar('#');
C++;
}
_putchar('\n');
L++;
}
}

