#include <ctype.h>
/**
* _isupper : checks for uppercase character
*
* return: si condition est vrai return 1
* return: si condition est fausse return 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return(1);
}
else
{
return(0);
}
}