#include "main.h"

/**
 * main - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: Always 0
 */
int main(void)
{
int i, j;
char *str;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
str = "FizzBuzz";
else if (i % 3 == 0)
str = "Fizz";
else if (i % 5 == 0)
str = "Buzz";
else
{
if (i >= 10)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if (i != 100)
_putchar(' ');
continue;
}
for (j = 0; str[j] != '\0'; j++)
_putchar(str[j]);
if (i != 100)
_putchar(' ');
}
_putchar('\n');
return (0);
}
