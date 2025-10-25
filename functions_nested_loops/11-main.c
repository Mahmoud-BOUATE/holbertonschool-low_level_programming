/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
while (n != 98)
{
print_number(n);
_putchar(',');
_putchar(' ');

if (n < 98)
n++;
else
n--;
}
print_number(98); // dernier nombre
_putchar('\n');
}