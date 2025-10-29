#include "main.h"
/**
 * _strlen - function that returns the lenght of a string
 * @s:  Pointeur
 *
 * Return: count.
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}


/**
 * puts_half - prints every other character of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
int len = _strlen(str);
int n;
if ((len % 2) == 0)
{
for ((n = len / 2); n < len; n++)
_putchar(str[n]);
}
else
{
for ((n = (len + 1) / 2); n < len; n++)
_putchar(str[n]);
}
_putchar('\n');
}
