#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a two dimensional array of integers
*@grid: the two dimensional array of integers to be freed
*@height: the height of the grid
*/

void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}


