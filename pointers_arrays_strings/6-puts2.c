#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 */
#include "main.h"
#include <stdio.h>
/**
 * _puts - afficher un phrase
 * @str: varibale pointeur
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
