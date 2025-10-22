#include "main.h"
#include <unistd.h>
/**
* _abs - fonction qui determine le signe des nombres
* @n: la varible de retour
* return: if true 1
* Return: else false 0
*/
int print_last_digit(int n)
{
int j;
j = n % 10;
if (j < 0)
j = -j;
_putchar('0'+ j);
return (j);
}







