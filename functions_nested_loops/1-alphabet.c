#include "main.h"
/**
* print_alphabet - prints the lowercase alphabet
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}


