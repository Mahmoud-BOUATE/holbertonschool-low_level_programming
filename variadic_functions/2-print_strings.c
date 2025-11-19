#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings
* @n: le nombre d'arguements
* @separator: is the string to be printed between numbers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
