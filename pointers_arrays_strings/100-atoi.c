#include "main.h"
/**
 * _atoi - Convertit une chaîne de caractères en entier
 * @s: La chaîne à convertir
 * 
 * Retour: L'entier correspondant à la chaîne
 * 
 * Cette version gère correctement les grands nombres pour éviter
 * les dépassements d'entiers (overflow) en utilisant un type long
 * pour l'accumulation.
 */

int _atoi(char *s)
{
int i = 0, sign = 1;
long num = 0; // long pour éviter overflow
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = -sign;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
num = num * sign;
if (num > 2147483647)
return 2147483647;
if (num < -2147483648)
return -2147483648;
return (int)num;
}
