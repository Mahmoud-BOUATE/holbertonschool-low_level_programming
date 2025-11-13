#include <stdlib.h>

/**
 * free_grid - libère une grille 2D d'entiers
 * @grid: pointeur vers la grille
 * @height: nombre de lignes
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
