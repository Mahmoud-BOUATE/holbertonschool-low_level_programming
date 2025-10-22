#include "main.h"
#include <unistd.h>
/**
* _isalpha - fonction pour déterminer si caractères saisie sont minu or maj
* @c: la varible de retour
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
return (1);
}
else
{
_putchar('-');
return (-1);
}
}







