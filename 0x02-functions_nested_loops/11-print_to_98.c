#include "main.h"
#include <stdio.h>
/**
 * print_to _98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 * Description: print to 98 
 */
void print_to_98(int n)
{
while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}
printf("98");
putchar('\n');
}
