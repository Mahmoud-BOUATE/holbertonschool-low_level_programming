#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer value
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
