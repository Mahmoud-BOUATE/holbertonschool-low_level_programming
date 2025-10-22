#include "main.h"
#include <unistd.h>
/**
* jack_bauer - fonction qui determine le signe des nombres
* @h: la varible pour compter les heres
* @m: la varibal pour compter les minutes
* return: if true 1
* Return: else false 0
*/
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int h, m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}





