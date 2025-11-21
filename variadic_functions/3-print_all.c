#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



void print_all(const char * const format, ...)
{
int i = 0, e;
char c;
char *s;
const char *sep = "";
va_list ap;


va_start(ap, format);

while (format[i] != '\0')
{

switch (format[i])
{
case 'c':
c = va_arg(ap, int);
printf("%s",sep);
printf("%c", c);
sep = ", ";
break;

case 'i':
e = va_arg(ap, int);
printf("%s",sep);
printf("%d", e);
sep = ", ";
break;

case 's':
s = va_arg(ap, char *);
printf("%s",sep);

printf("%s", s);
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



