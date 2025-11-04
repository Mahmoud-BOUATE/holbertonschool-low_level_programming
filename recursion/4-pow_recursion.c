#include "main.h"

/* helper récursif privé : teste les candidats x = 0,1,2,... */
static int _sqrt_check(int n, int x)
{
long sq = (long)x * x;
if (sq == n)
return (x);
if (sq > n)
return (-1);
return (_sqrt_check(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to check
 *
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_check(n, 0));
}
