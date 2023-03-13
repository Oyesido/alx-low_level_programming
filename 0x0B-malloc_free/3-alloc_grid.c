#include <main.h>
#include <stdlib.h>

/**
* alloc_grid - allocate a 2D grid of integers
* with given dimensions
* @width: width of grid
* @height: height of grid
*
* Return: pointer to allocated 2D array or NULL if allocation fails
*/
int **alloc_grid(int width, int height)
{
int **grid, i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
grid[i][j] = 0;

return (grid);
}

