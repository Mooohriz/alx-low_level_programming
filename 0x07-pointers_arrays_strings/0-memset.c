#include "main.h"
/**
*_memset - fill a block of memory with specific value
*@s: starting address of memory to be filled
@b: the desrired value
*@n: number of bytes to be changed
*
*Return: chnaged array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (n > 0)
{
		s[i] = b;
		i++;
		n--;
}
	return (s);
}

