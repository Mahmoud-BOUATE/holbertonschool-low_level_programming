#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* **alloc_grid - function that returns a pointer to a 2 dimensional array int
* @width: pour les lignes
* @height: pour les collones
* Return: return grid
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
