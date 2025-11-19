#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: le nombre d'arguements
*
* Return: return la somme des arguments passé à la fonction
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum, valeur;

va_list ap;
va_start(ap, n);
if (n == 0)
return (0);
sum = 0;
for (i = 0; i < n; i++)
{
valeur = va_arg(ap, int);
sum += valeur;
}
va_end(ap);
return (sum);
}
