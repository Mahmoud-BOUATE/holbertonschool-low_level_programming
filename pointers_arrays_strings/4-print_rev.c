#include "main.h"

/**
 * _puts - afficher un phrase
 * @str: varibale pointeur
 */
void print_rev(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
while (count--)
{
_putchar(s[count]);
}
_putchar('\n');
}