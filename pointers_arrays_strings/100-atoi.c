#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer representation of the string
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0;

    /* Handle leading + and - signs */
    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] == '+')
            sign *= 1;
        else if (s[i] >= '0' && s[i] <= '9')
            break;
        i++;
    }

    /* Convert numeric characters safely */
    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';

        /* Check for overflow before multiplying */
        if (sign == 1 && result > (INT_MAX - digit) / 10)
            return (INT_MAX);
        if (sign == -1 && result > (INT_MAX - digit) / 10)
            return (INT_MIN);

        result = result * 10 + digit;
        i++;
    }

    return (result * sign);
}
