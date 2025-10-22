#include "main.h"
#include <unistd.h>
/**
* print_alphabet - prints the lowercase alphabet
*/
void print_alphabet_x10(void)
{
char i;
int x;
for (x = 0; x < 10; x++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}



