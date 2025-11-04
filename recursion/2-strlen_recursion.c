#include "main.h"
/**
* _print_rev_recursion - function that prints a string, followed by a new line.
* @s: pointeur
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return 1 + _strlen_recursion(s + 1);
}
