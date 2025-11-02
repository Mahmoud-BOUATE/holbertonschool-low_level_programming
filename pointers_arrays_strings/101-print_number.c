#include "main.h"
#include <stdio.h>
/**
 * print_number - function that print entier
 * @n: variable
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
if (n / 10 == 0)
{
_putchar('0' - (n % 10));
return;
}
n = -n;
}
if (n < 10)
{
_putchar(n + '0');
}

else
{
if (n < 0)
{
_putchar('-');
n = -n;
}
print_number(n / 10);
_putchar((n % 10) + '0');
}
}
