#include "main.h"
#include <stdio.h>
/**
 * puts2 - afficher un phrase
 * @str: varibale pointeur
 */
#include "main.h"
#include <stdio.h>
/**
 * _puts - afficher un phrase
 * @str: varibale pointeur
 */
void puts2(char *str)
{
int i ;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
