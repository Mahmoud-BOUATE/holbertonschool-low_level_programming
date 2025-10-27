#include "main.h"
#include <unistd.h>
/**
 * print_square - prints a diagonal line of '\' characters
 * @size: number of characters / lines
 */
int main(void)
{
char *s = "Bizz\n";
int i;


for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}


return (0);
}
