#include "main.h"
#include <unistd.h>
/**
* _isalpha - fonction pour déterminer si caractères saisie sont minu or maj
* @c: la varible de retour
* return: if true 1
* Return: else false 0
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}






