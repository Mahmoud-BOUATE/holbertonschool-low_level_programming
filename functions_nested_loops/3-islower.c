#include "main.h"
#include <unistd.h>
/**
* _islower - fonction pour déterminer si les caractères saisie sont minu or maj
* @c: la varible de retour
* return: if true 1
* Return: else false 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}





