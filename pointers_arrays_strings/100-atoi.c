#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer representation of the string
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0;
    int number_started = 0;

    /* Ignore characters until the first digit, handle signs */
    while (s[i] != '\0')
    {
        if (s[i] == '-' || s[i] == '+')
        {
            if (number_started)
                break;  /* stop at signs after number starts */
            if (s[i] == '-')
                sign *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            number_started = 1;
            result = result * 10 + (s[i] - '0');
        }
        else if (number_started)
        {
            break;  /* stop at first non-digit after number starts */
        }
        i++;
    }

    return (result * sign);
}
