#include "main.h"

/**
 * _sqrt_helper - function to find natural square root using recursion
 * @n: number to find square root of
 * @i: iterator starting from 1
 * Return: natural square root or -1 if none
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the natural square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
