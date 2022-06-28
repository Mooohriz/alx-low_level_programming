#include <stdlib.h>
/**
*alloc_grid - Returns a pointer to a 2-dimensional array of
*		integers with each element initialized to 0.
*@width: the width of the 2-dimensional array
*@height: the height of the 2-dimensional array
*Return: if width <= 0, height <= 0, or the function fails - NULL.
*	otherwise - a pointer to the 2-dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
int **2D;
int hgt_index, wid_index;
if (width <= 0 || height <= 0)
return (NULL);
2D = malloc(sizeof(int *) * height);
if (2D == NULL)
return (NULL);
for (hgt_index = 0; hgt_index < height; hgt_index++)
{
2D[hgt_index] = malloc(sizeof(int) * width);
if (2D[hgt_index] == NULL)
{
for (; hgt_index >= 0; hgt_index--)
free(2D[hgt_index]);
free(2D);
return (NULL);
}
}
for (hgt_index = 0; hgt_index < height; hgt_index++)
{
for (wid_index = 0; wid_index < width; wid_index++)
2D[hgt_index][wid_index] = 0;
}
return (2D);
}

