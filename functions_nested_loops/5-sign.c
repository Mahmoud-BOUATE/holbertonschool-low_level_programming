#include "main.h"
#include <unistd.h>
/**
* print_sign - fonction qui determine le signe des nombres
* @n: la varible de retour
* return: if true 1
* Return: else false 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}







