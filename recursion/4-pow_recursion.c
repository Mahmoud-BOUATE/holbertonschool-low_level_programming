#include "main.h"

/**
 * _sqrt_check - helper récursif qui teste les candidats x
 * @n: nombre dont on cherche la racine
 * @x: candidat courant
 * Return: la racine naturelle ou -1 si elle n'existe pas
 */
int _sqrt_check(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (_sqrt_check(n, x + 1));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d’un nombre
 * @n: nombre à tester
 * Return: la racine naturelle ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_check(n, 0));
}

