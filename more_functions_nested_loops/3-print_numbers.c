#include <ctype.h>
#include <unistd.h>
#include "main.h"

/**
* print_numbers - function that print numbers
*
*Return: Always 0.
*/
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
