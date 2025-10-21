#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main - Fonction
* Declaration varibale entier n
* Fonction de calcul
* Condition - if
* Condition else if
* Condition else
* Main return - fonction
* Return: retourne 0 si code valide
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else if (n == 0)
{
printf("is zero\n");
}
	return (0);
}
