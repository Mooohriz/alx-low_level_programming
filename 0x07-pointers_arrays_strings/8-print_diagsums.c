#include <stdio.h>

/**
*print_diagsums - description
*@a: 2d array of int types
*@size: size of array (square)
*/

void print_diagsums(int *a, int size)
{
int i;
int tl = 0;
int tr = 0;
int s = size * size;

for (i = 0; i < s; i += size + 1)
{
tl += a[i];
}

for (i = size - 1; i < s - 1; i += size - 1)
{
tr += a[i];
}
printf("%d, %d\n", tl, tr);
}

