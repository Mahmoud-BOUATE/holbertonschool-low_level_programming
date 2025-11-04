#include "main.h"
/**
* factorial - function  that returns the length of a string.
* @n: pointeur
*
 * Return: factorial
*/
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
