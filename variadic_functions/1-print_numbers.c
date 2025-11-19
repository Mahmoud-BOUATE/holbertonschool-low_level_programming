#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that prints numbers, followed by a new line
* @n: le nombre d'arguements
* @separator: is the string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

unsigned int a;
va_list ap;
va_start(ap, n);

for (i = 0 ; i < n ; i++)
{
a = va_arg(ap, const unsigned int);
printf("%d", a);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
