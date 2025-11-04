#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the number
 * @x: current candidate for the square root (start with 1)
 * Return: the natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion_helper(int n, int x)
{
if (x * x == n)
return x;
if (x * x > n)
return -1;
return _sqrt_recursion_helper(n, x + 1);
}
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;
return _sqrt_recursion_helper(n, 1);
}
