#include <stdio.h>

int main(void)
{
int i;
char j;
for(i = 0; i <= 9; i++)
{
putchar('0'+ i);
}
for(j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return(0);
}