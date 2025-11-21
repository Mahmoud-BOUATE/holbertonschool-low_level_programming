#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - function that prints anything.
* @format: le nombre d'arguements
*/
void print_all(const char * const format, ...)
{
int i = 0, e;
char c;
char *s;
const char *sep = "";
float f;
va_list ap;
va_start(ap, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
c = va_arg(ap, int);
printf("%s%c", sep, c);
sep = ", ";
break;
case 'i':
e = va_arg(ap, int);
printf("%s%d", sep, e);
sep = ", ";
break;
case 'f':
f = va_arg(ap, float);
printf("%s%f", sep, f);
sep = ", ";
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
sep = ", ";
break;
default:
break;
}
i++;
}
va_end(ap);
printf("\n");
}
