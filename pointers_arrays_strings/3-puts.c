#include "main.h"
#include <stdio.h>
/**
 * _puts - afficher un phrase
 * @str: varibale pointeur
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
