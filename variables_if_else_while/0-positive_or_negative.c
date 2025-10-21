#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main - Fonction
*
* Declaration varibale entier n
* A chaque exécution, et imprime si le nombre stocké dans n
* Positive, negative, ou zero
*
* Return: retourne 0 si code valide
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
	return (0);
}
