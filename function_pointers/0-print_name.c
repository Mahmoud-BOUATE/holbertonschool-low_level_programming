#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - function that print name
* @name: name that the function print
* @f: function pointeur
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}

