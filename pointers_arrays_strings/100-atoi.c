#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer representation of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0;
int num_started = 0;
while (s[i] != '\0')
{
if (s[i] == '-' && !num_started)
sign *= -1;
else if (s[i] == '+' && !num_started)
; /* ignore */
else if (s[i] >= '0' && s[i] <= '9')
{
num_started = 1;
if (result > (2147483647 - (s[i] - '0')) / 10)
{
if (sign == 1)
return (2147483647);
else
return (-2147483648);
}
result = result * 10 + (s[i] - '0');
}
else if (num_started)
break; /* stop at first non-digit after number starts */
i++;
}
return (result *sign);
}
