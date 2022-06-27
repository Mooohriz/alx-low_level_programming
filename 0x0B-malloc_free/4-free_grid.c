#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a two dimensional array of integers
*@grid: the two dimensional array of integers to be freed
*@height: the height of the grid
*Return: free the grid
*/

void free_grid(int **grid, int height)
{
int i;
if (grid != NULL || height != 0)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}

