#include "main.h"
/**
* _pow_recursion - function  that returns the value of x raised to the power y
* @x: 1er valeur
* @y: 2eme valeur
* Return: factorial
*/
int _sqrt_recursion(int n)
{
int x;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
x = 1;
while (x * x < n)
x++;
if (x * x == n)
return x;
else
return -1;
}