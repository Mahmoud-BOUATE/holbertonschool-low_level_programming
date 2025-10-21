#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Fonction
*
* Declaration varibale entier n
* A chaque exécution, imprime si le nombre stocké dans n
* Positive, negative, ou zero
*
* Return: retourne 0 si code valide
*/
int main(void)
{
	int n;
int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digital of %d and is %d greather than 5\n", n, last_digit);
}
else if (n == 0)
{
printf("Last digital of %d and is %d 0\n", n, last_digit);
}
else
{
printf("Last digital of %d and is less than 6 and not 0\n", n, last_digit);
}
	return (0);
}
