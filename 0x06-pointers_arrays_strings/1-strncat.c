#include "main.h"
/**
*_strncat - concatenate two strings
*@dest: first string
*@src: second string
*@n: the number of bytes to use from src
*Return: string.
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;

while (dest[a] != 0)
{
	a++;
}
b = 0;
while (src[b] != 0 && b < n)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

