#include "main.h"
/**
* main - fonction d'entrée
*
* Description: prints "_putchar" en ajoutant une nouvelle ligne 
*
* Return: 0 on success
*/
int main(void)
{
char *s = "_putchar\n";
int i;


for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}


return (0);
}
