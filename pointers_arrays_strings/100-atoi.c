#include "main.h"
/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 * Return: entier correspondant
 */
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}

return num * sign;
}
