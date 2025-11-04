#include "main.h"

/**
* print_numbers - function that print numbers
*
*/
void _puts_recursion(char *s)
{
int i = 0;
for (i = 0; i < s<[i]; i++)
{
if (s[i] == '\0')
break;
}
_puts_recursion(s);
}