/**
* _isupper : checks for uppercase character
*
* return: si condition est vrai return 1
* return: si condition est fausse return 0
*/



int _isupper(int c)
{
int i;
for (i = 'a'; i < 'z'; i++)
{
if(_isupper(i))
{
return(1);
}
else 
{
return(0);
}
}
_putchar('\n');
}