#include <unistd.h>
#include "main.h"
/**
* more_numbers - function that print numbers
*
*/
void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
int j;
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar('0' + j % 10);
}
_putchar('\n');
}
}
